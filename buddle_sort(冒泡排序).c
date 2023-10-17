#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
    //确定冒泡排序的趟数
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for (j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,sz);
    for (i = 0; i < sz; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}
