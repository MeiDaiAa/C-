# include <stdio.h>
int main()
{
	int class, number;
	printf("������İ༶��");
	scanf_s("%d", &class);
	printf("�������ѧ�ţ�");
	scanf_s("%d", &number);
	if (class == 1)
	{
		if (number >= 20 && number <= 60)
		{
			printf("�༶��ѧ�Ŷ���ȷ���������ҡ�");
		}
		else
		{
			printf("�༶��ȷ��ѧ�Ŵ���");
		}
	}
	else
	{
		printf("�༶����");
	}
}
