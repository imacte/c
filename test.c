#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("����������:>");
	scanf("%s", password);//�������룬������password������
	//������ʣһ��\n
	//��ȡ\n
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:>");
	ret = getchar();//Yes/No
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}