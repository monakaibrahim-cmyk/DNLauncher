#pragma once

#include "LiteHTMLCommon.h"
#include "LiteHTMLEntityResolver.h"

#pragma warning(push, 4)
#pragma warning (disable : 4290)	// C++ Exception Specification ignored

class CLiteHTMLAttributes;	// forward declaration

class CLiteHTMLElemAttr
{
	// Friends
	friend class CLiteHTMLAttributes;

// Constructors
public:
	CLiteHTMLElemAttr(LPCWSTR lpszAttribName = NULL, 
					  LPCWSTR lpszAttribValue = NULL)
	{
		Init();
		m_strAttrName = lpszAttribName;
		m_strAttrValue = lpszAttribValue;
	}

	CLiteHTMLElemAttr(const CLiteHTMLElemAttr &rSource)
	{
		Init();
		m_strAttrName = rSource.m_strAttrName;
		m_strAttrValue = rSource.m_strAttrValue;
	}

// Initialization Helpers
private:
	static void Init(void)
	{
		if(_namedColors.size())
			return;

		/** 28 system colors */
		_namedColors[L"activeborder"]			= (COLORREF)0x8000000A;
		_namedColors[L"activecaption"]			= (COLORREF)0x80000002;
		_namedColors[L"appworkspace"]			= (COLORREF)0x8000000C;
		_namedColors[L"background"]				= (COLORREF)0x80000001;
		_namedColors[L"buttonface"]				= (COLORREF)0x8000000F;
		_namedColors[L"buttonhighlight"]		= (COLORREF)0x80000014;
		_namedColors[L"buttonshadow"]			= (COLORREF)0x80000010;
		_namedColors[L"buttontext"]				= (COLORREF)0x80000012;
		_namedColors[L"captiontext"]			= (COLORREF)0x80000009;
		_namedColors[L"graytext"]				= (COLORREF)0x80000011;
		_namedColors[L"highlight"]				= (COLORREF)0x8000000D;
		_namedColors[L"highlighttext"]			= (COLORREF)0x8000000E;
		_namedColors[L"inactiveborder"]			= (COLORREF)0x8000000B;
		_namedColors[L"inactivecaption"]		= (COLORREF)0x80000003;
		_namedColors[L"inactivecaptiontext"]	= (COLORREF)0x80000013;
		_namedColors[L"infobackground"]			= (COLORREF)0x80000018;
		_namedColors[L"infotext"]				= (COLORREF)0x80000017;
		_namedColors[L"menu"]					= (COLORREF)0x80000004;
		_namedColors[L"menutext"]				= (COLORREF)0x80000007;
		_namedColors[L"scrollbar"]				= (COLORREF)0x80000000;
		_namedColors[L"threeddarkshadow"]		= (COLORREF)0x80000015;
		_namedColors[L"threedface"]				= (COLORREF)0x8000000F;
		_namedColors[L"threedhighlight"]		= (COLORREF)0x80000014;
		_namedColors[L"threedlightshadow"]		= (COLORREF)0x80000016;
		_namedColors[L"threedshadow"]			= (COLORREF)0x80000010;
		_namedColors[L"window"]					= (COLORREF)0x80000005;
		_namedColors[L"windowframe"]			= (COLORREF)0x80000006;
		_namedColors[L"windowtext"]				= (COLORREF)0x80000008;

		/** 16 basic colors */
		_namedColors[L"black"]					= LITEHTML_ARGB(0xFF, 0x00, 0x00, 0x00);
		_namedColors[L"gray"]					= LITEHTML_ARGB(0xFF, 0x80, 0x80, 0x80);
		_namedColors[L"silver"]					= LITEHTML_ARGB(0xFF, 0xC0, 0xC0, 0xC0);
		_namedColors[L"white"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xFF, 0xFF);
		_namedColors[L"yellow"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xFF, 0x00);
		_namedColors[L"olive"]					= LITEHTML_ARGB(0xFF, 0x80, 0x80, 0x00);
		_namedColors[L"red"]					= LITEHTML_ARGB(0xFF, 0xFF, 0x00, 0x00);
		_namedColors[L"maroon"]					= LITEHTML_ARGB(0xFF, 0x80, 0x00, 0x00);
		_namedColors[L"fuchsia"]				= LITEHTML_ARGB(0xFF, 0xFF, 0x00, 0xFF);
		_namedColors[L"purple"]					= LITEHTML_ARGB(0xFF, 0x80, 0x00, 0x80);
		_namedColors[L"blue"]					= LITEHTML_ARGB(0xFF, 0x00, 0x00, 0xFF);
		_namedColors[L"navy"]					= LITEHTML_ARGB(0xFF, 0x00, 0x00, 0x80);
		_namedColors[L"aqua"]					= LITEHTML_ARGB(0xFF, 0x00, 0xFF, 0xFF);
		_namedColors[L"teal"]					= LITEHTML_ARGB(0xFF, 0x00, 0x80, 0x80);
		_namedColors[L"lime"]					= LITEHTML_ARGB(0xFF, 0x00, 0x80, 0xFF);
		_namedColors[L"green"]					= LITEHTML_ARGB(0xFF, 0x00, 0xFF, 0x00);

		/** additional named colors */
		_namedColors[L"darkolivegreen"]			= LITEHTML_ARGB(0xFF, 0x55, 0x6B, 0x2F);
		_namedColors[L"olivedrab"]				= LITEHTML_ARGB(0xFF, 0x6B, 0x8E, 0x23);
		_namedColors[L"yellowgreen"]			= LITEHTML_ARGB(0xFF, 0x9A, 0xCD, 0x32);
		_namedColors[L"lawngreen"]				= LITEHTML_ARGB(0xFF, 0x7C, 0xFC, 0x00);
		_namedColors[L"chartreuse"]				= LITEHTML_ARGB(0xFF, 0x7F, 0xFF, 0x00);
		_namedColors[L"greenyellow"]			= LITEHTML_ARGB(0xFF, 0xAD, 0xFF, 0x2F);
		_namedColors[L"palegreen"]				= LITEHTML_ARGB(0xFF, 0x98, 0xFB, 0x98);
		_namedColors[L"lightgreen"]				= LITEHTML_ARGB(0xFF, 0x90, 0xEE, 0x90);
		_namedColors[L"darkgreen"]				= LITEHTML_ARGB(0xFF, 0x00, 0x64, 0x00);
		_namedColors[L"forestgreen"]			= LITEHTML_ARGB(0xFF, 0x22, 0x8B, 0x22);
		_namedColors[L"seagreen"]				= LITEHTML_ARGB(0xFF, 0x2E, 0x8B, 0x57);
		_namedColors[L"mediumseagreen"]			= LITEHTML_ARGB(0xFF, 0x3C, 0xB3, 0x71);
		_namedColors[L"limegreen"]				= LITEHTML_ARGB(0xFF, 0x32, 0xCD, 0x32);
		_namedColors[L"darkseagreen"]			= LITEHTML_ARGB(0xFF, 0x8F, 0xBC, 0x8B);
		_namedColors[L"springgreen"]			= LITEHTML_ARGB(0xFF, 0x00, 0xFF, 0x7F);
		_namedColors[L"mediumspringgreen"]		= LITEHTML_ARGB(0xFF, 0x00, 0xFA, 0x99);
		_namedColors[L"darkslategray"]			= LITEHTML_ARGB(0xFF, 0x2F, 0x4F, 0x4F);
		_namedColors[L"darkcyan"]				= LITEHTML_ARGB(0xFF, 0x00, 0x8B, 0x8B);
		_namedColors[L"cadetblue"]				= LITEHTML_ARGB(0xFF, 0x5F, 0x9E, 0xA0);
		_namedColors[L"lightseagreen"]			= LITEHTML_ARGB(0xFF, 0x20, 0xB2, 0xAA);
		_namedColors[L"mediumaquamarine"]		= LITEHTML_ARGB(0xFF, 0x66, 0xCD, 0xAA);
		_namedColors[L"turquoise"]				= LITEHTML_ARGB(0xFF, 0x40, 0xE0, 0xD0);
		_namedColors[L"aquamarine"]				= LITEHTML_ARGB(0xFF, 0x7F, 0xFF, 0xD4);
		_namedColors[L"paleturquoise"]			= LITEHTML_ARGB(0xFF, 0xAF, 0xEE, 0xEE);
		_namedColors[L"slategray"]				= LITEHTML_ARGB(0xFF, 0x70, 0x80, 0x90);
		_namedColors[L"lightslategray"]			= LITEHTML_ARGB(0xFF, 0x77, 0x88, 0x99);
		_namedColors[L"steelblue"]				= LITEHTML_ARGB(0xFF, 0x46, 0x82, 0xB4);
		_namedColors[L"deepskyblue"]			= LITEHTML_ARGB(0xFF, 0x00, 0xBF, 0xFF);
		_namedColors[L"darkturquoise"]			= LITEHTML_ARGB(0xFF, 0x00, 0xCE, 0xD1);
		_namedColors[L"mediumturquoise"]		= LITEHTML_ARGB(0xFF, 0x48, 0xD1, 0xCC);
		_namedColors[L"powderblue"]				= LITEHTML_ARGB(0xFF, 0xB0, 0xE0, 0xE6);
		_namedColors[L"lightcyan"]				= LITEHTML_ARGB(0xFF, 0xE0, 0xFF, 0xFF);
		_namedColors[L"darkblue"]				= LITEHTML_ARGB(0xFF, 0x00, 0x00, 0x8B);
		_namedColors[L"mediumblue"]				= LITEHTML_ARGB(0xFF, 0x00, 0x00, 0xCD);
		_namedColors[L"royalblue"]				= LITEHTML_ARGB(0xFF, 0x41, 0x69, 0xe1);
		_namedColors[L"dodgerblue"]				= LITEHTML_ARGB(0xFF, 0x1E, 0x90, 0xFF);
		_namedColors[L"cornflowerblue"]			= LITEHTML_ARGB(0xFF, 0x64, 0x95, 0xED);
		_namedColors[L"skyblue"]				= LITEHTML_ARGB(0xFF, 0x87, 0xCE, 0xEB);
		_namedColors[L"lightskyblue"]			= LITEHTML_ARGB(0xFF, 0x87, 0xCE, 0xFA);
		_namedColors[L"lightblue"]				= LITEHTML_ARGB(0xFF, 0xAD, 0xD8, 0xE6);
		_namedColors[L"midnightblue"]			= LITEHTML_ARGB(0xFF, 0x19, 0x19, 0x70);
		_namedColors[L"darkslateblue"]			= LITEHTML_ARGB(0xFF, 0x48, 0x3D, 0x8B);
		_namedColors[L"blueviolet"]				= LITEHTML_ARGB(0xFF, 0x8A, 0x2B, 0xE2);
		_namedColors[L"slateblue"]				= LITEHTML_ARGB(0xFF, 0x6A, 0x5A, 0xCD);
		_namedColors[L"mediumslateblue"]		= LITEHTML_ARGB(0xFF, 0x7B, 0x68, 0xEE);
		_namedColors[L"mediumpurple"]			= LITEHTML_ARGB(0xFF, 0x93, 0x70, 0xDB);
		_namedColors[L"lightsteelblue"]			= LITEHTML_ARGB(0xFF, 0xB0, 0xC4, 0xDE);
		_namedColors[L"lavender"]				= LITEHTML_ARGB(0xFF, 0xE6, 0xE6, 0xFA);
		_namedColors[L"indigo"]					= LITEHTML_ARGB(0xFF, 0x4B, 0x00, 0x82);
		_namedColors[L"darkviolet"]				= LITEHTML_ARGB(0xFF, 0x94, 0x00, 0xD3);
		_namedColors[L"darkorchid"]				= LITEHTML_ARGB(0xFF, 0x99, 0x32, 0xCC);
		_namedColors[L"mediumorchid"]			= LITEHTML_ARGB(0xFF, 0xBA, 0x55, 0xD3);
		_namedColors[L"orchid"]					= LITEHTML_ARGB(0xFF, 0xDA, 0x70, 0xD6);
		_namedColors[L"violet"]					= LITEHTML_ARGB(0xFF, 0xEE, 0x82, 0xEE);
		_namedColors[L"plum"]					= LITEHTML_ARGB(0xFF, 0xDD, 0xA0, 0xDD);
		_namedColors[L"thistle"]				= LITEHTML_ARGB(0xFF, 0xD8, 0xDF, 0xD8);
		_namedColors[L"darkmagenta"]			= LITEHTML_ARGB(0xFF, 0x8B, 0x00, 0x8B);
		_namedColors[L"mediumvioletred"]		= LITEHTML_ARGB(0xFF, 0xC7, 0x15, 0x85);
		_namedColors[L"deeppink"]				= LITEHTML_ARGB(0xFF, 0xFF, 0x14, 0x93);
		_namedColors[L"palmvioletred"]			= LITEHTML_ARGB(0xFF, 0xDB, 0x70, 0x93);
		_namedColors[L"hotpink"]				= LITEHTML_ARGB(0xFF, 0xFF, 0x69, 0xB4);
		_namedColors[L"lightpink"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xB6, 0xC1);
		_namedColors[L"pink"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xC0, 0xCB);
		_namedColors[L"mistyrose"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xE4, 0xE1);
		_namedColors[L"brown"]					= LITEHTML_ARGB(0xFF, 0xA5, 0x2A, 0x2A);
		_namedColors[L"indianred"]				= LITEHTML_ARGB(0xFF, 0xCD, 0x5C, 0x5C);
		_namedColors[L"rosybrown"]				= LITEHTML_ARGB(0xFF, 0xBC, 0x8F, 0x8F);
		_namedColors[L"salmon"]					= LITEHTML_ARGB(0xFF, 0xFA, 0x80, 0x72);
		_namedColors[L"lightcoral"]				= LITEHTML_ARGB(0xFF, 0xF0, 0x80, 0x80);
		_namedColors[L"darksalmon"]				= LITEHTML_ARGB(0xFF, 0xE9, 0x96, 0x7A);
		_namedColors[L"lightsalmon"]			= LITEHTML_ARGB(0xFF, 0xFF, 0xA0, 0x7A);
		_namedColors[L"peachpuff"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xDA, 0xB9);
		_namedColors[L"darkred"]				= LITEHTML_ARGB(0xFF, 0x8B, 0x00, 0x00);
		_namedColors[L"firebrick"]				= LITEHTML_ARGB(0xFF, 0xB2, 0x22, 0x22);
		_namedColors[L"crimson"]				= LITEHTML_ARGB(0xFF, 0xDC, 0x14, 0x3C);
		_namedColors[L"orangered"]				= LITEHTML_ARGB(0xFF, 0xFF, 0x45, 0x00);
		_namedColors[L"tomato"]					= LITEHTML_ARGB(0xFF, 0xFF, 0x63, 0x47);
		_namedColors[L"coral"]					= LITEHTML_ARGB(0xFF, 0xFF, 0x7F, 0x50);
		_namedColors[L"wheat"]					= LITEHTML_ARGB(0xFF, 0xF5, 0xDE, 0xB3);
		_namedColors[L"papayawhip"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xEF, 0xD5);
		_namedColors[L"sienna"]					= LITEHTML_ARGB(0xFF, 0xA0, 0x52, 0x2D);
		_namedColors[L"chocolate"]				= LITEHTML_ARGB(0xFF, 0xD2, 0x69, 0x1E);
		_namedColors[L"darkorange"]				= LITEHTML_ARGB(0xFF, 0xFF, 0x8C, 0x00);
		_namedColors[L"sandybrown"]				= LITEHTML_ARGB(0xFF, 0xF4, 0xA4, 0x60);
		_namedColors[L"orange"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xA5, 0x00);
		_namedColors[L"navajowhite"]			= LITEHTML_ARGB(0xFF, 0xFF, 0xDE, 0xAD);
		_namedColors[L"moccasin"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xE4, 0xB5);
		_namedColors[L"saddlebrown"]			= LITEHTML_ARGB(0xFF, 0x8B, 0x45, 0x13);
		_namedColors[L"peru"]					= LITEHTML_ARGB(0xFF, 0xCD, 0x85, 0x3F);
		_namedColors[L"burlywood"]				= LITEHTML_ARGB(0xFF, 0xDE, 0xB8, 0x87);
		_namedColors[L"tan"]					= LITEHTML_ARGB(0xFF, 0xD2, 0xB4, 0x8C);
		_namedColors[L"bisque"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xE4, 0xC4);
		_namedColors[L"blanchedalmond"]			= LITEHTML_ARGB(0xFF, 0xFF, 0xEB, 0xCD);
		_namedColors[L"antiquewhite"]			= LITEHTML_ARGB(0xFF, 0xFA, 0xEB, 0xD7);
		_namedColors[L"darkgoldenrod"]			= LITEHTML_ARGB(0xFF, 0xB8, 0x86, 0x0B);
		_namedColors[L"goldenrod"]				= LITEHTML_ARGB(0xFF, 0xDA, 0xA5, 0x20);
		_namedColors[L"darkkhaki"]				= LITEHTML_ARGB(0xFF, 0xBD, 0xB7, 0x6B);
		_namedColors[L"gold"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xD7, 0x00);
		_namedColors[L"khaki"]					= LITEHTML_ARGB(0xFF, 0xF0, 0xE6, 0x8C);
		_namedColors[L"palegoldenrod"]			= LITEHTML_ARGB(0xFF, 0xEE, 0xE8, 0xAA);
		_namedColors[L"lemonchiffon"]			= LITEHTML_ARGB(0xFF, 0xFF, 0xFA, 0xCD);
		_namedColors[L"beige"]					= LITEHTML_ARGB(0xFF, 0xF5, 0xF5, 0xDC);
		_namedColors[L"lightgoldenrodyellow"]	= LITEHTML_ARGB(0xFF, 0xFA, 0xFA, 0xD2);
		_namedColors[L"lightyellow"]			= LITEHTML_ARGB(0xFF, 0xFF, 0xFF, 0xE0);
		_namedColors[L"ivory"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xFF, 0x00);
		_namedColors[L"cornsilk"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xF8, 0xDC);
		_namedColors[L"oldlace"]				= LITEHTML_ARGB(0xFF, 0xFD, 0xF5, 0xE6);
		_namedColors[L"florawhite"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xFA, 0xF0);
		_namedColors[L"honeydew"]				= LITEHTML_ARGB(0xFF, 0xF0, 0xFF, 0xF0);
		_namedColors[L"mintcream"]				= LITEHTML_ARGB(0xFF, 0xF5, 0xFF, 0xFA);
		_namedColors[L"azure"]					= LITEHTML_ARGB(0xFF, 0xF0, 0xFF, 0xFF);
		_namedColors[L"ghostwhite"]				= LITEHTML_ARGB(0xFF, 0xF8, 0xF8, 0xFF);
		_namedColors[L"linen"]					= LITEHTML_ARGB(0xFF, 0xFA, 0xF0, 0xE6);
		_namedColors[L"seashell"]				= LITEHTML_ARGB(0xFF, 0xFF, 0xF5, 0xEE);
		_namedColors[L"snow"]					= LITEHTML_ARGB(0xFF, 0xFF, 0xFA, 0xFA);
		_namedColors[L"dimgray"]				= LITEHTML_ARGB(0xFF, 0x69, 0x69, 0x69);
		_namedColors[L"darkgray"]				= LITEHTML_ARGB(0xFF, 0xA9, 0xA9, 0xA9);
		_namedColors[L"lightgray"]				= LITEHTML_ARGB(0xFF, 0xD3, 0xD3, 0xD3);
		_namedColors[L"gainsboro"]				= LITEHTML_ARGB(0xFF, 0xDC, 0xDC, 0xDC);
		_namedColors[L"whitesmoke"]				= LITEHTML_ARGB(0xFF, 0xF5, 0xF5, 0xF5);
		_namedColors[L"ghostwhite"]				= LITEHTML_ARGB(0xFF, 0xF8, 0xF8, 0xFF);
		_namedColors[L"aliceblue"]				= LITEHTML_ARGB(0xFF, 0xF0, 0xF8, 0xFF);
	}

// Attributes
public:
	CStringW getName(void) const
		{ return (m_strAttrName); }

	CStringW getValue(void) const
		{ return (m_strAttrValue); }

	bool isNamedColorValue(void) const
	{
		if ( (m_strAttrValue.GetLength()) && (::iswalnum(m_strAttrValue[0])) )
		{
			COLORREF crTemp = _clrInvalid;
			CStringW		strKey(m_strAttrValue);

			strKey.MakeLower();
			NAMEDCOLOR_MAP_ITER iter = _namedColors.find(m_strAttrValue);
			if( iter != _namedColors.end() )
			{
				crTemp = iter->second;
				return true;
			}
		}
		return (false);
	}

	bool isSysColorValue(void) const
	{
		if ( (m_strAttrValue.GetLength()) && (::iswalnum(m_strAttrValue[0])) )
		{
			COLORREF	crTemp = _clrInvalid;
			CStringW		strKey(m_strAttrValue);

			strKey.MakeLower();
			NAMEDCOLOR_MAP_ITER iter = _namedColors.find(strKey);
			if( iter != _namedColors.end() )
			{
				crTemp = iter->second;
				return (crTemp >= 0x80000000 && crTemp <= 0x80000018);
			}
		}
		return (false);
	}

	bool isHexColorValue(void) const
	{
		// zero-length attribute value?
		if (m_strAttrValue.IsEmpty())
			return (false);

		if (m_strAttrValue[0] == L'#')
		{
			if (m_strAttrValue.GetLength() > 1)
			{
				for (int i = 1; i < m_strAttrValue.GetLength(); i++)
				{
					if (!::iswxdigit(m_strAttrValue[i]))
						return (false);
				}
				return (true);
			}
		}

		return (false);
	}

	bool isColorValue(void) const
		{ return (isNamedColorValue() || isHexColorValue()); }

	COLORREF getColorValue(void) const
	{
		COLORREF crTemp = _clrInvalid;
		if (isNamedColorValue())
		{
			CStringW	strKey(m_strAttrValue);
			strKey.MakeLower();
			NAMEDCOLOR_MAP_ITER iter = _namedColors.find(strKey);
			if( iter != _namedColors.end() )
			{
				crTemp = iter->second;

				// is this a system named color value?
				if (crTemp >= 0x80000000 && crTemp <= 0x80000018)
					crTemp = ::GetSysColor(crTemp & 0x7FFFFFFF);
			}
		}
		else if (isHexColorValue())
		{
			crTemp = ::wcstoul(m_strAttrValue.Mid(1), NULL, 16);
		}

		return (crTemp);
	}
	
	CStringW getColorHexValue(void) const
	{
		CStringW	strColorHex;
		if (isHexColorValue())
			strColorHex = m_strAttrValue.Mid(1);
		else
		{
			COLORREF crTemp = getColorValue();
			if (crTemp != _clrInvalid)
				strColorHex.Format(L"#%06x", crTemp);
		}
		return (strColorHex);
	}

	bool isPercentValue(void) const
		{ return (m_strAttrValue.Right(1) == L"%" ? true : false); }

	unsigned short getPercentValue(unsigned short max = _percentMax) const
	{
		ASSERT(max > 0);
		if (!isPercentValue())	return (0);
		unsigned short	percentVal = (unsigned short)((short)*this);
		return ((percentVal > max ? max : percentVal));
	}
	
	enum LengthUnitsEnum { em, ex, px, per, in, cm, mm, pt, pc };
	short getLengthValue(LengthUnitsEnum &rUnit) const
	{
		static const wchar_t	_szUnits[][4] = 
		{
			/** relative length units */
			L"em", L"ex", L"px", L"%", 
			/** absolute length units */
			L"in", L"cm", L"mm", L"pt", L"pc" 
		};

		if (m_strAttrValue.IsEmpty())
			return (0);

		int i;
		for (i = 0; i < sizeof(_szUnits)/sizeof(_szUnits[0]); i++)
		{
			if (m_strAttrValue.Right(::lstrlenW(_szUnits[i])). \
				CompareNoCase(_szUnits[i]) == 0)
			{
				rUnit = (LengthUnitsEnum)i;
				break;
			}
		}

		if (i == sizeof(_szUnits)/sizeof(_szUnits[0]))
			return (0);

		return (*this);
	}

// Operators
public:
	operator bool() const
	{
		if (!m_strAttrValue.CompareNoCase(L"true"))
			return (true);
		if (!m_strAttrValue.CompareNoCase(L"false"))
			return (false);
		return (((short)*this ? true : false));
	}

	operator BYTE() const
		{ return ((BYTE)(m_strAttrValue.GetLength() ? m_strAttrValue[0] : 0)); }
	
	operator double() const
		{ return (::wcstod(m_strAttrValue, NULL)); }
	
	operator short() const
		{ return ((short)::_wtoi(m_strAttrValue)); }
	
	operator LPCWSTR() const
		{ return (m_strAttrValue); }

// Private Operations
private:
	void putValue(LPCWSTR lpszValue)
	{
		ASSERT(lpszValue);
		//ASSERT(AfxIsValidString(lpszValue));

		m_strAttrValue = lpszValue;
		
		// ignore leading white-spaces
		m_strAttrValue.TrimLeft();

		// ignore trailing white-spaces
		m_strAttrValue.TrimRight();

		// ignore line feeds
		m_strAttrValue.Remove(L'\n');

		// replace tab and carriage-return with a single space
		m_strAttrValue.Replace(L'\r', L' ');
		m_strAttrValue.Replace(L'\t', L' ');

		/** resolve entity reference(s) */
		int		iCurPos = -1, iParseLen = 0;
		wchar_t	chSubst = 0;
		do
		{
			if ((iCurPos = m_strAttrValue.Find(L'&', ++iCurPos)) == -1)
				break;
			
			iParseLen = CLiteHTMLEntityResolver::resolveEntity(m_strAttrValue.Mid(iCurPos), chSubst);
			if (iParseLen)
			{
				m_strAttrValue.Replace
				(
					m_strAttrValue.Mid(iCurPos, iParseLen), 
					CStringW(chSubst)
				);
			}
		}
		while (true);
	}

// Parsing Helpers
public:
	// parses an attribute/value pair from the given string
	UINT parseFromStr(LPCWSTR lpszString);

// Data Members
public:
	static const COLORREF		_clrInvalid;	// an invalid color
	static const unsigned short	_percentMax;	// maximum allowable percentage value

private:
	static NAMEDCOLOR_MAP	_namedColors;	// collection of named colors
	CStringW					m_strAttrName,  // attribute name
							m_strAttrValue; // attribute value
};

inline UINT CLiteHTMLElemAttr::parseFromStr(LPCWSTR lpszString)
{
	ASSERT(lpszString);
	//ASSERT(AfxIsValidString(lpszString));

	LPCWSTR	lpszBegin = lpszString;
	LPCWSTR	lpszEnd;
	wchar_t	ch = 0;

	// skip leading white-space characters
	while (::iswspace(*lpszBegin))
		//lpszBegin = ::_tcsinc(lpszBegin);
		lpszBegin++;

	// name doesn't begin with an alphabet?
	if (!::iswalnum(*lpszBegin))
		return (0U);

	lpszEnd = lpszBegin;
	do
	{
		// attribute name may contain letters (a-z, A-Z), digits (0-9), 
		// underscores '_', hyphen '-', colons ':', and periods '.'
		if ( (!::iswalnum(*lpszEnd)) && 
			 (*lpszEnd != L'-') && (*lpszEnd != L':') && 
			 (*lpszEnd != L'_') && (*lpszEnd != L'.') )
		{
			ASSERT(lpszEnd != lpszBegin);

			// only white-space characters, a null-character, an 
			// equal-sign, a greater-than symbol, or a forward-slash 
			// can act as the separator between an attribute and its 
			// value
			if (*lpszEnd == NULL || ::iswspace(*lpszEnd) || 
				*lpszEnd == L'=' || 
				*lpszEnd == L'>' || *lpszEnd == L'/')
			{
				break;
			}

			return (0U);	// any other character will fail parsing process
		}

		//lpszEnd = ::_tcsinc(lpszEnd);
		lpszEnd++;
	}
	while (true);

	// extract attribute name
	CStringW	strAttrName(lpszBegin, UINT(lpszEnd - lpszBegin));

	// Note : Skip whitespace between attribute name and '='.
	//
	while (::iswspace(*lpszEnd))
		//lpszEnd = ::_tcsinc(lpszEnd);
		lpszEnd++;
	
	if (*lpszEnd != L'=')
	{
		m_strAttrName = strAttrName;
		m_strAttrValue.Empty();
		return UINT(lpszEnd - lpszString);
	}
	else
	{
		// skip white-space characters after equal-sign 
		// and the equal-sign itself
		do {
			//lpszEnd = ::_tcsinc(lpszEnd);
			lpszEnd++;
		} while (::iswspace(*lpszEnd));

		lpszBegin = lpszEnd;
		ch = *lpszEnd;
		
		// is attribute value wrapped in quotes?
		if (ch == L'\'' || ch == L'\"')
		{
			//lpszBegin = ::_tcsinc(lpszBegin);	// skip quote symbol
			lpszBegin++;

			do
			{
				//lpszEnd = ::_tcsinc(lpszEnd);
				lpszEnd++;
			}
			// Loop until we find the same quote character that 
			// was used at the starting of the attribute value.
			// Anything within these quotes is considered valid!
			// NOTE that the entity references are resolved later.
			while (*lpszEnd != NULL && *lpszEnd != ch);
		}

		// open attribute value i.e. not wrapped in quotes?
		else
		{
			do 
			{ 
				//lpszEnd = ::_tcsinc(lpszEnd);
				lpszEnd++;
			}
			// loop until we find a tag ending delimeter or any 
			// white-space character, or until we reach at the 
			// end of the string buffer
			while (*lpszEnd != NULL && !::iswspace(*lpszEnd) && 
				   *lpszEnd != L'/' && *lpszEnd != L'>');
		}

		m_strAttrName = strAttrName;
		if (lpszEnd == lpszBegin)	// empty attribute value?
		{
			m_strAttrValue.Empty();
		}
		else
		{
			// use putValue() instead of direct assignment; 
			// this will automatically normalize data before 
			// assigning according to the specs and will 
			// also resolve entity references!!!
			putValue(CStringW(lpszBegin, UINT(lpszEnd - lpszBegin)));
		}

		// calculate and return the count of characters successfully parsed
		// Note : Skip trailing single or double quote
		//
		while( *lpszEnd == L'\'' || *lpszEnd == L'\"' )
			//lpszEnd = ::_tcsinc(lpszEnd);
			lpszEnd++;
			
		return UINT(lpszEnd - lpszString);
	}

	return (0U);
}

class CLiteHTMLAttributes
{
// Construction/Destruction
public:
	CLiteHTMLAttributes() 
	{ }

	CLiteHTMLAttributes(CLiteHTMLAttributes &rSource, bool bCopy = false)// throw(CMemoryException) 
	{
		if (!bCopy)
		{
			for( int i=0; i<(int)rSource.m_parrAttrib.size(); i++ )
			{
				m_parrAttrib.push_back( rSource.m_parrAttrib[i] );
				rSource.m_parrAttrib[i] = NULL;
			}

			rSource.m_parrAttrib.clear();
		}
		else
		{
			for( int i=0; i<(int)rSource.m_parrAttrib.size(); i++ )
			{
				CLiteHTMLElemAttr *pAttr = new CLiteHTMLElemAttr((*rSource.m_parrAttrib[i]));
				m_parrAttrib.push_back( pAttr );
			}
		}
	}

	virtual ~CLiteHTMLAttributes()
		{ removeAll(); }

// Initialization
public:
	// parses attribute/value pairs from the given string
	UINT parseFromStr(LPCWSTR lpszString);

// Attributes
public:
	int getCount(void) const
	{
		return (int)m_parrAttrib.size();
	}

	int getIndexFromName(LPCWSTR lpszAttributeName) const
	{
		//ASSERT(AfxIsValidString(lpszAttributeName));
		CLiteHTMLElemAttr *pItem = NULL;
		for (int iElem = 0; iElem < getCount(); iElem++)
		{
			if ((pItem = m_parrAttrib[iElem]) == NULL)	// just in case
				continue;
			
			// perform a CASE-INSENSITIVE search
			if (pItem->m_strAttrName.CompareNoCase(lpszAttributeName) == 0)
				return (iElem);
		}

		return (-1);
	}

	CLiteHTMLElemAttr operator[](int nIndex) const
	{
		if (!(nIndex >= 0 && nIndex < getCount()))
		{
			ASSERT(FALSE);
			return (CLiteHTMLElemAttr());
		}

		return (*(m_parrAttrib[nIndex]));
	}

	CLiteHTMLElemAttr operator[](LPCWSTR lpszIndex) const
	{
		ASSERT(lpszIndex);
		//ASSERT(AfxIsValidString(lpszIndex));
		return ((*this)[getIndexFromName(lpszIndex)]);
	}

	CLiteHTMLElemAttr getAttribute(int nIndex) const
		{ return ((*this)[nIndex]); }

	CLiteHTMLElemAttr getAttribute(LPCWSTR lpszIndex) const
	{
		ASSERT(lpszIndex);
		//ASSERT(AfxIsValidString(lpszIndex));
		return ((*this)[getIndexFromName(lpszIndex)]);
	}

	CStringW getName(int nIndex) const
		{ return ((*this)[nIndex].m_strAttrName); }

	CStringW getValue(int nIndex) const
		{ return ((*this)[nIndex].m_strAttrValue); }

	CStringW getValueFromName(LPCWSTR lpszAttributeName) const
		{ return ((*this)[lpszAttributeName].m_strAttrValue); }

// Operations
public:
	CLiteHTMLElemAttr* addAttribute(LPCWSTR lpszName, LPCWSTR lpszValue)
	{
		ASSERT(lpszName);
		ASSERT(lpszValue);
		//ASSERT(AfxIsValidString(lpszName));
		//ASSERT(AfxIsValidString(lpszValue));

		CLiteHTMLElemAttr *pItem = new CLiteHTMLElemAttr(lpszName, lpszValue);
		if (pItem != NULL)
		{
			m_parrAttrib.push_back(pItem);
		}

		return (pItem);
	}
	
	bool removeAttribute(int nIndex)
	{
		if (!(nIndex >= 0 && nIndex < (int)m_parrAttrib.size()))
			return (false);

		SAFE_DELETE_POINTER(m_parrAttrib[nIndex]);
		return (true);
	}
	
	bool removeAll(void)
	{
		for (int iElem = 0; iElem < (int)m_parrAttrib.size(); iElem++)
		{
			SAFE_DELETE_POINTER(m_parrAttrib[iElem]);
		}
		
		m_parrAttrib.clear();
		return (true);
	}

// Data Members
private:
	typedef std::vector<CLiteHTMLElemAttr*>		HTMLElemAttr_VEC;
	HTMLElemAttr_VEC m_parrAttrib;	// array of attributes/value pairs
};

inline UINT CLiteHTMLAttributes::parseFromStr(LPCWSTR lpszString)
{
	ASSERT(lpszString);
	//ASSERT(AfxIsValidString(lpszString));

	HTMLElemAttr_VEC	pcoll;
	CLiteHTMLElemAttr	oElemAttr;
	const UINT			nStrLen = (UINT)::wcslen(lpszString);
	UINT				nRetVal = 0U, 
						nTemp = 0U;

	do
	{
		// try to parse an attribute/value 
		// pair from the rest of the string
		if (!(nTemp = oElemAttr.parseFromStr(&lpszString[nRetVal])))
		{
			if (!nRetVal)
				goto LError;
			break;
		}

		// add attribute/value pair to collection
		pcoll.push_back(new CLiteHTMLElemAttr(oElemAttr));

		// advance seek pointer
		nRetVal += nTemp;
	} while (nRetVal < nStrLen); // do we still have something in the buffer to parse?

	// collection is empty?
	if(pcoll.empty())
		goto LError;

	// current collection could not be emptied?
	if(!removeAll())
		goto LError;

	for( int i=0; i<(int)pcoll.size(); i++ )
	{
		m_parrAttrib.push_back( pcoll[i] );
		pcoll[i] = NULL;
	}
	pcoll.clear();
	goto LCleanExit;	// success!

LError:
	for( int i=0; i<(int)pcoll.size(); i++ )
	{
		SAFE_DELETE_POINTER(pcoll[i]);
	}
	pcoll.clear();
	nRetVal = 0U;

LCleanExit:
	return (nRetVal);
}

#pragma warning(default : 4290)
#pragma warning(pop)