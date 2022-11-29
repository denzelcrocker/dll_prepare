#include <Windows.h>
#include <stdio.h>
#define PATH L"DLLCode.dll"

typedef int(_cdecl* Function)(int, int);
int main(void)
{
	HMODULE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL) return 1;
	Function myFunc = (Function)GetProcAddress(hMyDLL, "DLLMain");
	printf(myFunc);
	FreeLibrary(hMyDLL);
	return 0;
}