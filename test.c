#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
                 //������arr��һ��ָ��
int binary_search(int arr[], int k,int sz)
{
	//�㷨��ʵ��
	//int sz = sizeof(arr) / sizeof(arr[0]);//����ں����ڲ����ˣ����Էŵ�������
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
	//���ֲ���
	//��һ�����������в��ҵ�ĳ����
	//����ҵ��˷��أ���������±ꡣ�Ҳ����ķ���-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//                     ���ݵ�������arr��Ԫ�صĵ�ַ
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ������\n");
	}
	else
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	return 0;
}