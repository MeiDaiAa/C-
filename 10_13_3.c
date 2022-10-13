# include <stdio.h>
int main()
{
	int x, y, z, Max;
	printf("比较xyz三个的大小\n");
	printf("输入x的值：");
	scanf_s("%d", &x);
	printf("输入y的值：");
	scanf_s("%d", &y); 
	printf("输入z的值：");
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
	printf("最大的数为：%d", Max);
}
