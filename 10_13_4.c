# include <stdio.h>
int main()
{
	int class, number;
	printf("输入你的班级：");
	scanf_s("%d", &class);
	printf("输入你的学号：");
	scanf_s("%d", &number);
	if (class == 1)
	{
		if (number >= 20 && number <= 60)
		{
			printf("班级和学号都正确，请进入教室。");
		}
		else
		{
			printf("班级正确，学号错误。");
		}
	}
	else
	{
		printf("班级错误。");
	}
}
