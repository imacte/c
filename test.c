#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("a = % d b = % d\n", a, b);
	return 0;
}
