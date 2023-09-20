#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9');
		continue;//如果输入的字符不在0和9之间跳过，继续while循环
		printf(ch);
		putchar(ch);//输出字符ch
	}
	return 0;
}
