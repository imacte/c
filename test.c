#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
                 //本质上arr是一个指针
int binary_search(int arr[], int k,int sz)
{
	//算法的实现
	//int sz = sizeof(arr) / sizeof(arr[0]);//这个在函数内部求不了，可以放到函数外
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	//二分查找
	//在一个有序数组中查找的某个数
	//如果找到了返回，这个数的下标。找不到的返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//                     传递的是数组arr首元素的地址
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("找不到指定数字\n");
	}
	else
		printf("找到了，下标是：%d\n", ret);
	return 0;
}