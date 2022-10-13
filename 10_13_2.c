# include <stdio.h>
int main()
{
	int x, y;
	printf("ÊäÈëxµÄÖµ:");
	scanf_s("%d", &x);
	if (x >= 10)
	{
		y = 3 * x - 11;
	}
	else if (x >= 1)
	{
		y = 2 * x - 1;
	}
	else
	{
		y = x;
	}
	printf("%d", y);
}
