# include <stdio.h>
int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3];
	int c, d;
	for (c = 0; c < 3; c++)
	{
		for (d = 0; d < 3; d++)
		{
			b[d][c] = a[c][d];
		}
	}
	for (c = 0; c < 3; c++)
	{
		for (d = 0; d < 3; d++)
		{
			printf("%d", b[c][d]);
		}
		printf("\n");
	}
}