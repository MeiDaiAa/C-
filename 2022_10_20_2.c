# include <stdio.h>
int main()
{
	int x, y, result;
	result = 1;
	printf("����һ������һ��������");
	scanf_s("%d", &x);
	for (y = x - 1; y > 1; y--)
	{
		if (x % y == 0)
		{
			printf("�����������������");
			result = 0;
			break;
		}
	}
	if (result != 0)
	{
		printf("���������������");
	}
}