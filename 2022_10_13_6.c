# include <stdio.h>
# define Down 500
int main()
{ 
	int a, sale;
	double money, add;
	printf("员工今年的销售额为：");
	scanf_s("%d", &sale);
	a = (sale - 1) / 1000;
	switch (a)
	{
	case 1:
		money = 0;
		break;
	case 2:
	case 3:
	case 4:
		money = sale * 0.08;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		money = sale * 0.1;
		break;
	default:
		money = sale * 0.12;
		break;
	}
	add = money + Down;
	printf("该员工的提成为:%f总工资为:%f", money, add);
	
}