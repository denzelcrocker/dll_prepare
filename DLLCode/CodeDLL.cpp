#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

extern "C" __declspec(dllimport) void DLLMain(int);
void DLLMain(int)
{
	system("chcp 1251>nul");
	printf("оооо");
}