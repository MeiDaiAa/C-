# include <stdio.h>
int main()
{
	int day;
	printf("��Ҫ��ʲô�����������ڼ�����");
	scanf_s("%d", &day);
	switch (day)
	{
		case 1:
			printf("˯��");
			break;
		case 2:
			printf("�Է�");
			break;
		case 3:
			printf("����Ϸ");
			break;
		case 4:
			printf("��c����");
			break;
		case 5:
			printf("����");
			break;
		case 6:
			printf("����Ů");
			break;
		case 7:
			printf("Ϊǰ���������������");
			break;
		default:
			printf("û����һ����");
	}
}