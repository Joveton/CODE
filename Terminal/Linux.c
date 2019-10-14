/*
 FileName	: Linux.c
 Author	: veton 
 Email	: joveton@yeah.net 
 Created	: Mon 14 Oct 2019 02:11:58 AM EDT
*/

#include<stdio.h>

int main(int argc, const char *argv[])
{
	/* 进程切换 */
	printf("Alt + Tab\n");

	/* 根目录 */
	printf("/\n");

	/* 用户目录 */
	printf("~/\n");

	/* 相对路径 */
	printf("../\n");

	/* 绝对路径 */
	printf("/home\n");

	/* 普通用户 */
	printf("$\n");

	/* 超级用户 */
	printf("#\n");

	/* 打印路径 */
	printf("pwd\n");

	/* 切换路径 */
	printf("cd\n");

	/* 预览文件 */
	printf("ls\n");

	/* 手册 */
	/* man 1 命令 */
	/* man 2 系统调用 */
	/* man 3 函数 */
	printf("man\n");
	
	/* 当前文件夹 */
	printf(".\n");

	/* 上级文件夹 */
	printf("..\n");

	/* 获取一次超级用户权限 */
	printf("sudo\n");

	/* 文件形式 7 */
	/* b 块设备文件 */
	/* c 字符设备文件 */
	/* d 目录文件 */
	/* - 普通、文本、二进制可执行文件 */
	/* l 软链接文件 */
	/* s socket文件 */
	/* p 管道文件 */
	printf("bcd-lsp\n");
	
	/* 文件权限 */
	/*  */
	printf("r\n");
	printf("w\n");
	printf("x\n");
	printf("-\n");

	/* 设置权限 */
	printf("chmod\n");

	/* 创建文件夹 */
	printf("mkdir\n");

	/* 创建普通文件 */
	printf("touch\n");

	/* 删除命令 */
	printf("rm\n");

	/* 移动 */
	printf("mv\n");

	/* 复制 */
	printf("cp\n");

	/* 可视化 */
	printf("nautilus .\n");

    return 0;
}
