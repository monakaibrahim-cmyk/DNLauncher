#include "stdafx.h"
#include "DnServiceModule.h"

IServiceModule* g_pServiceModule = NULL;

IServiceModule* DnServiceModule::CreateServiceModule()
{
	return new IServiceModule();
}
