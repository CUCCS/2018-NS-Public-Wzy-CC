#include <stdio.h>
#include <Windows.h>

//int main()
//{
//	printf("Æô¶¯¼ÆËãÆ÷£º");
//	WinExec("calc.exe",SW_SHOW);
//	ExitProcess(0);
//	return 0;
//}

//int main()
//{
//	char *buffer = (char*)malloc(3);
//	memset(buffer,0,3);
//	scanf("%s", buffer);
//	system("pause");
//	return 0;
//}


//unsigned char shellcode[] =
//"/x55/x8B/xEC/x33"
//"/xC0/x50/xB8/x2E"
//"/x65/x78/x65/x50"
//"/xB8/x63/x61/x6C"
//"/x63/x50/x8B/xC4"
//"/x6A/x05/x50/xB8"
//"/xAD/x23/x86/x7C"
//"/xFF/xD0/x33/xC0"
//"/x50/xB8/xFA/xCA"
//"/x81/x7C/xFF/xD0"
//"/x8B/xE5/x5D/x33";
//
//int main()
//{
//	__asm
//	{
//		lea eax, shellcode
//		call eax
//	}
//	return 0;
//}