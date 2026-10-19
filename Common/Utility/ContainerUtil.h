#pragma once

// Note : Guaranteed to work with std::vector, std::list, std::map.
//		Test before using with other containers.
//

struct YES {};
struct NO {};

template <typename T>
struct is_ptr 
{ 
	enum { result = false }; 
	typedef NO Result; 
};

template <typename T>
struct is_ptr<T*> 
{ 
	enum { result = true }; 
	typedef YES Result; 
};

template <typename T>
struct is_ptr<T* const> 
{ 
	enum { result = true }; 
	typedef YES Result; 
};

template <typename T>
struct is_ptr<T* volatile> 
{ 
	enum { result = true }; 
	typedef YES Result; 
};

template <typename T>
struct is_ptr<T* const volatile> 
{ 
	enum { result = true }; 
	typedef YES Result; 
};

template <typename T>
class is_pair
{
private:
	template <typename U> 
	struct is_pair_imp 
	{
		enum { value = false }; 
		typedef NO Result;
	};

	template <typename U, typename V>
	struct is_pair_imp < std::pair<U, V> >
	{
		enum { value = true };
		typedef YES Result;
	};

public:
	enum { value = is_pair_imp<T>::value };
	typedef typename is_pair_imp<T>::Result Result;
};

template <typename IS_POINTER>
struct do_delete {};

template <>
struct do_delete<YES>
{
	template <typename U>
	void operator()(U param) { delete param; }
};

template <>
struct do_delete<NO>
{
	template <typename U>
	void operator()(U param) {}
};

template <typename IS_ASSOCIATION>
struct delete_if_imp {};

template <>
struct delete_if_imp<YES>
{
	template <typename C, typename P>
	void operator()(C& con, P comp)
	{
		do_delete< is_ptr<C::value_type::second_type>::Result > doDelete;
		for (C::iterator itr(con.begin()); itr != con.end();)
		{
			if (comp(itr->second))
			{
				doDelete(itr->second);
				con.erase(itr++);
			}
			else ++itr;
		}
	}
};

template <>
struct delete_if_imp<NO>
{
	template <typename C, typename P>
	void operator()(C& con, P comp)
	{
		do_delete< is_ptr<C::value_type>::Result > doDelete;
		for (C::iterator itr(con.begin()); itr != con.end();)
		{
			if (comp(*itr))
			{
				doDelete(*itr);
				itr = con.erase(itr);
			}
			else ++itr;
		}
	}
};

template <typename C, typename P>
inline void delete_if(C& con, P comp)
{
	delete_if_imp< is_pair<C::value_type>::Result > imp;
	imp(con, comp);
}