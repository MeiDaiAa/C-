# include <stdio.h>
int main()
{
	int year;
	printf("������ݣ�");
	scanf_s("%d", &year);
	if (year % 100 == 0)
	{
		printf("���������ݲ�������");
	}
	else
	{
		if (year % 4 == 0)
		{
			printf("����������Ϊ����");
		}
		else
		{
			printf("���������ݲ�������");
		}
	}
}