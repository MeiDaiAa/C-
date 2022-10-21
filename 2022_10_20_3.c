# include <stdio.h>
int main()
{
	int x, y, z, w, n;
	printf("水仙花数有：");
	for (x = 100; x < 1000; x++)
	{
		y = x / 100;
		z = (x - y*100) / 10;
		w = x - y*100 - z*10;
		n = y * y * y + z * z * z + w * w * w;
		if (n == x)
		{
			printf("%d ", x);
		}
	}
}