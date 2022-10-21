# include <stdio.h>
int main()
{
	int x, y, result;
	for (x = 1,y = 1; x < 10; x++)
	{
		for (; y < 10; y++)
		{
			result = x * y;
			printf("%dx%d=%d  ", x, y, result);
		}
		y = x;
		printf("\n");
		y++;
	}
}