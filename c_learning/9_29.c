# include <stdio.h>
# define Long 10
# define Width 8
# define R 4
int grith, area, result;
int main()
{
	grith = Long + Width;
	area = Long * Width;
	printf("长方形的长和宽分别是：%d,%d 其面积是%d,周长是：%d\n",Long, Width,area,grith);
	result = R * R;
	printf("半径为4的圆的面积为%d\n",  result);
	return 0;
}





