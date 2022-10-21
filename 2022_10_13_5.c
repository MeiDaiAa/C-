# include <stdio.h>
int main()
{
	int day;
	printf("我要干什么？今天是星期几？：");
	scanf_s("%d", &day);
	switch (day)
	{
		case 1:
			printf("睡觉");
			break;
		case 2:
			printf("吃饭");
			break;
		case 3:
			printf("玩游戏");
			break;
		case 4:
			printf("上c语言");
			break;
		case 5:
			printf("发呆");
			break;
		case 6:
			printf("看美女");
			break;
		case 7:
			printf("为前几天无所事事忏悔");
			break;
		default:
			printf("没有这一天呢");
	}
}