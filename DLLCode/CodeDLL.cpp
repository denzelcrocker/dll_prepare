#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

extern "C" __declspec(dllimport) int DLLMain(int, int);
int DLLMain(int , int )
{
	printf("оно работает");
	return 0;
}