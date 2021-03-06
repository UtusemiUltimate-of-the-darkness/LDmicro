
#include "ldmicroapp.hpp"
#include "ldmicro.h"
#include <ldlog.hpp>

extern HINSTANCE Instance;
extern char ExePath[MAX_PATH];

INT WINAPI WinMain(HINSTANCE hInstance , HINSTANCE hPreviousInstace , LPSTR lpCmdLn , int nCmdShow)
{
    auto logg = ldlog::getLogger("default");
    logg->add_sink(ldlog::newWindowsDebugStringSink());

    LOG(ldlog::Info, logg, "Run LDmicro-xx ver.: {}.", "0.0.0.0");

    GetModuleFileName(hInstance, ExePath, MAX_PATH);
    ExtractFilePath(ExePath);
    Instance = hInstance;

    setlocale(LC_ALL, "");

    fillPcPinInfos();

    CLdmicroApp m_Application;

    return  m_Application.Run();

    (void)hPreviousInstace;
    (void)lpCmdLn;
    (void)nCmdShow;
}
