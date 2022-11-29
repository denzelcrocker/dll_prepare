#include <Windows.h>
#include <stdio.h>
#define PATH L"DLLCode.dll"

typedef int(_cdecl* Function)(int);
int main(void)
{
	system("chcp 1251>nul");
	HMODULE hMyDLL;
	if ((hMyDLL = LoadLibrary(PATH)) == NULL) return 1;
	Function myFunc = (Function)GetProcAddress(hMyDLL, "DLLMain");
	myFunc(7);
	FreeLibrary(hMyDLL);
	return 0;
}