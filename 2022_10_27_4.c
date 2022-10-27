# include <stdio.h>
int main()
{
	int a[11];
	int b, max, num;
	max = a[0];
	for (b = 0; b < 10; b++)
	{
		scanf_s("%d", &a[b]);
		if (max < a[b])
		{
			max = a[b];
			num = b + 1;
		}
	}
	printf("最大数为：%d,位置号为：%d", max, num);
}