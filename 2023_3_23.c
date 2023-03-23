# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# define N 3
/* 请定义一个描述学生基本信息的结构，包括姓名、学号、身份证号、年龄、性别等，
并定义一个结构体数组。编程：
1.	编写函数input（），输入学生基本信息（3～5条记录）
2.	编写函数output（），输出全体记录信息；
3.	编写函数search（），检索一个指定的学生姓名并返回，由主函数打印到屏幕上；
4.	说明：访问结构的时候，运算符前是结构体变量时用"."，是指向结构体变量的指针时用"->"。 */
struct student
{
	char name[20];
	char num[20];
	char chnid[20];
	char old[5];
	char sex[5];
};
typedef struct student student;
void input(student *s)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("input the NO.%d student's name:",i+1);
		scanf("%s",s[i].name);
		printf("input the NO.%d student's num:",i+1);
		scanf("%s",s[i].num);
		printf("input the NO.%d student's id:",i+1);
		scanf("%s",s[i].chnid);
		printf("input the NO.%d student's old:",i+1);
		scanf("%s",s[i].old);
		printf("input the NO.%d student's sex:",i+1);
		scanf("%s",s[i].sex);
	}
}
void output(student *s)
{
	int i;
	printf("NAME\t\tNUM\t\tID\t\t\tOLD\tSEX\n");
	for(i=0;i<N;i++)
	{
		printf("%s\t\t%s\t%s\t%s\t%s\n",s[i].name,s[i].num,s[i].chnid,s[i].old,s[i].sex);
	}
}
void search(student *s,char*name)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].name,name)==0)
		{
			break;
		}
	}
	if(i<N)
	{
		printf("NAME\t\tNUM\t\tID\t\t\tOLD\tSEX\n");
		printf("%s\t\t%s\t%s\t%s\t%s\n",s[i].name,s[i].num,s[i].chnid,s[i].old,s[i].sex);
	}
	else
	{
		printf("NO RECORD!\n"); 
	}
}
int main()
{
	student s[N]={0};
	char name[20];
	input(s);
	output(s);
	printf("input the name waht you want to search:");
	scanf("%s",&name);
	search(s,name);
	return 0;
}

























