// NativeMainApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <conio.h>


int main()
{
	HMODULE dll = LoadLibrary(L"NativeDll.dll");
	DWORD ret = GetLastError();
	Sleep(1000);
	FreeLibrary(dll);
	_getch();
    return 0;
}

