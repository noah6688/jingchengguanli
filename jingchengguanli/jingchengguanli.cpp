// jingchengguanli.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>
#include <stdio.h>
#include<string.h>
#include<TlHelp32.h>

int KillProcess(DWORD Pid)
{
	HANDLE hprocess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Pid);//�򿪽��̵õ����̾��
	if(hProcess == NULL)
	{
		printf("OpenProcess error \n");
		return 0;
	}
	if(TerminateProcess(hProcess,0))//��������
		


}

int main()
{
    return 0;
}

