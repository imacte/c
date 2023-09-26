#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*void swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}*/
//x,y有独立空间，不对a,b造成影响
//可以用指针来引用a,b地址来进行交换
void swap1(int* pa, int* pb)
//使用void是因为该函数只需交换不需返回值，
//viod是空的意思，void表示该函数没有返回值
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	swap1(&a,&b);//a,b传的是地址而是本身的值
	printf("a = % d b = % d\n", a, b);
	return 0;
}
