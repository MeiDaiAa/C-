# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# define N 3
/* �붨��һ������ѧ��������Ϣ�Ľṹ������������ѧ�š����֤�š����䡢�Ա�ȣ�
������һ���ṹ�����顣��̣�
1.	��д����input����������ѧ��������Ϣ��3��5����¼��
2.	��д����output���������ȫ���¼��Ϣ��
3.	��д����search����������һ��ָ����ѧ�����������أ�����������ӡ����Ļ�ϣ�
4.	˵�������ʽṹ��ʱ�������ǰ�ǽṹ�����ʱ��"."����ָ��ṹ�������ָ��ʱ��"->"�� */
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

























