# include <stdio.h>
# include <math.h>
int sushu(int a)
{
	int i = 0;
	for (i = 2; i <= sqrt(a); i++);
	if (a % i == 0)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int c, b;
	printf("输入一个数：\n");
		scanf("%d", &b);
	c = sushu(b);
	if (c == 0)
	{
		printf("你输入的数是素数\n");
	}
	else
	{
		printf("你输入的数不是素数\n");
	}
	return 0;
}
