// jingchengguanli.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <stdio.h>
#include<string.h>
#include<TlHelp32.h>

int KillProcess(DWORD Pid)
{
	HANDLE hprocess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Pid);//打开进程得到进程句柄
	if(hProcess == NULL)
	{
		printf("OpenProcess error \n");
		return 0;
	}
	if(TerminateProcess(hProcess,0))//结束进程
		


}

int main()
{
    return 0;
}

