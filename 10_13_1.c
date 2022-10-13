# include <stdio.h>
int main()
{
	int year;
	printf("输入年份：");
	scanf_s("%d", &year);
	if (year % 100 == 0)
	{
		printf("你输入的年份不是闰年");
	}
	else
	{
		if (year % 4 == 0)
		{
			printf("你输入的年份为闰年");
		}
		else
		{
			printf("你输入的年份不是闰年");
		}
	}
}