# include <stdio.h>
int main()
{
	int x, y, z, Max;
	printf("�Ƚ�xyz�����Ĵ�С\n");
	printf("����x��ֵ��");
	scanf_s("%d", &x);
	printf("����y��ֵ��");
	scanf_s("%d", &y); 
	printf("����z��ֵ��");
	scanf_s("%d", &z);
	if (x > y)
	{
		if (x > z)
		{
			Max = x;
		}
		else
		{
			Max = z;
		}
	}
	else
	{
		if (y > z)
		{
			Max = y;
		}
		else
		{
			Max = z;
		}
	}
	printf("������Ϊ��%d", Max);
}
