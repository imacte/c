#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9');
		continue;//���������ַ�����0��9֮������������whileѭ��
		printf(ch);
		putchar(ch);//����ַ�ch
	}
	return 0;
}