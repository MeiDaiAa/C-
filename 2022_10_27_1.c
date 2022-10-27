# include <stdio.h>
int main()
{
	int a[11], num, b;
	float num1;
	num = 0;
	for (b = 1; b < 11; b++)
	{
		scanf_s("%d", &a[b]);
		num = num + a[b];
	}
	num1 = num / 10;
	printf("%f", num1);
	return 0;
}