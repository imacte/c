#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void Add(int* p)
{
	(*p)++;//++比调用地址优先度高，不加括号，先执行的是p++
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);//num = 1
	Add(&num);
	printf("%d\n", num);//num = 2
	Add(&num);
	printf("%d\n", num);//num = 3
	return 0;
}
