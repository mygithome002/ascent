#include "StdAfx.h"
#include "Setup.h"

extern "C" SCRIPT_DECL uint32 _exp_get_version()
{
    return MAKE_SCRIPT_VERSION(SCRIPTLIB_VERSION_MAJOR, SCRIPTLIB_VERSION_MINOR);
}

extern "C" SCRIPT_DECL uint32 _exp_get_script_type()
{
	return SCRIPT_TYPE_MISC;
}

extern "C" SCRIPT_DECL void _exp_script_register(ScriptMgr* mgr)	// Comment any script to disable it
{
    SetupDeadmines(mgr);
    SetupMoltenCore(mgr);
	SetupZulGurub(mgr);
	SetupBlackwingLair(mgr);
	SetupNaxxramas(mgr);
	SetupOnyxiasLair(mgr);
}

#ifdef WIN32

BOOL APIENTRY DllMain( HANDLE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved )
{
    return TRUE;
}

#endif
