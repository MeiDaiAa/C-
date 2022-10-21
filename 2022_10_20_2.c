# include <stdio.h>
int main()
{
	int x, y, result;
	result = 1;
	printf("输入一个大于一的整数：");
	scanf_s("%d", &x);
	for (y = x - 1; y > 1; y--)
	{
		if (x % y == 0)
		{
			printf("你输入的数不是质数");
			result = 0;
			break;
		}
	}
	if (result != 0)
	{
		printf("你输入的数是质数");
	}
}