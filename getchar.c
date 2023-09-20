#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("请输入密码:>");
	scanf("%s", password);//输入密码，并放在password数组中
	//缓冲区剩一个\n
	//读取\n
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）:>");
	ret = getchar();//Yes/No
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
