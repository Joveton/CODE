/*
 FileName	: Terminal.c
 Author	: veton 
 Email	: joveton@yeah.net 
 Created	: Mon 14 Oct 2019 12:54:50 AM EDT
*/

#include<stdio.h>

int main(int argc, const char *argv[])
{
	printf("终端命令.\n");
	
	/* 打开新的初始化终端 */
	printf("Ctrl + Alt + 'T'\n");
	 
	/* 在同一终端打开新的窗口 */
	printf("Ctrl + Shift + 'T'\n");
	 
	 /* 相同路径下打开新的终端 */
	printf("Ctrl + Shift + 'N'\n");

	/* 放大字体 */
	printf("Ctrl + Shift + '+'\n");

	/* 缩小字体 */
	printf("Ctrl + '-'\n");

	/* 关闭终端 */
	printf("Ctrl + Shift + 'Q'\n");
	printf("exit\n");

	/* 清除屏幕 */
	printf("Ctrl + 'L'\n");
	printf("clean\n");

    return 0;
}
