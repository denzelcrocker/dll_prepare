#include <Windows.h>
#define PATH L"DLLCode.dll"

typedef int(_cdecl* Function)(int, int);
int main(void)
{
	HMODULE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL) return 1;
	Function myFunc = GetProcAddress(hMyDLL, "DLLMain");
	FreeLibrary(hMyDLL);
	return 0; 
	/*HMODULE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL) return 1;
	Function DllMain;
	DllMain = Function(GetProcAddress(hMyDLL, "DLLMain"));*/
}