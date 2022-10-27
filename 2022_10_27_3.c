# include <stdio.h>
int main()
{
	int a[11] = {0,1,2,3,4,5,6,7,8,9};
	int b;
	for (b = 9; b > -1; b--)
	{
		printf("%d\n", a[b]);
	}
}