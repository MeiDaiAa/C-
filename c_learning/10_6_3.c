# include <stdio.h>
# include <math.h>
int main()
{
	float r, h, tiji, biaomianji;
	printf("输入圆柱体的底面半径");
	scanf_s("%f", &r);
	printf("输入圆柱体的高");
	scanf_s("%f", &h);
	tiji = 3.14 * r * r * h;
	biaomianji = 2 * 3.14 * r * h + 3.14 * r * r * 2;
	printf("圆柱体的体积为%1.3f表面积为%1.3f\n", tiji, biaomianji);
	int gongzi, shangpin, result;
	printf("输入销售人员的基本工资：");
	scanf_s("%d", &gongzi);
	printf("输入销售人员的销售商品：");
	scanf_s("%d", &shangpin);
	result = gongzi + shangpin * 1.5;
	printf("销售人员的月工资是：%d\n", result);
	float x1, x2, result1, result2, data, result3, deta;
	printf("函数：ax^2+bx+c=0\n");
	printf("a=");
	scanf_s("%f", &result1);
	printf("b=");
	scanf_s("%f", &result2);
	printf("c=");
	scanf_s("%f", &result3);
	data = result2 * result2 - 4 * result1 * result3;
	deta = sqrt(data);
	if (data >= 0)
	{
		x1 = (-result2 + deta) / 2 * result1;
		x2 = (-result2 - deta) / 2 * result1;
		if (x1 == x2)
		{
			printf("该方程的两个根相同为%1.3f", x1);
		}
		else
		{
			printf("该方程的两个根分别为%1.3f,%1.3f", x1, x2);
		}
	}
	else
	{
		printf("该方程无解。");
	}

	return 0;
}