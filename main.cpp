#include <stdio.h>
#include <Windows.h>
#include <Shldisp.h>

int CALLBACK WinMain(
   HINSTANCE hInstance,
   HINSTANCE hPrevInstance,
   LPSTR lpCmdLine,
   int nCmdShow
)
{
  IShellDispatch4 *pShellDisp = NULL; 
  HRESULT sc;
  CoInitialize(NULL);    
  sc = CoCreateInstance( CLSID_Shell, NULL, CLSCTX_SERVER, IID_IDispatch, (LPVOID *) &pShellDisp );
  sc = pShellDisp->ToggleDesktop();
  pShellDisp->Release(); 
}