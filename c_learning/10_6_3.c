# include <stdio.h>
# include <math.h>
int main()
{
	float r, h, tiji, biaomianji;
	printf("����Բ����ĵ���뾶");
	scanf_s("%f", &r);
	printf("����Բ����ĸ�");
	scanf_s("%f", &h);
	tiji = 3.14 * r * r * h;
	biaomianji = 2 * 3.14 * r * h + 3.14 * r * r * 2;
	printf("Բ��������Ϊ%1.3f�����Ϊ%1.3f\n", tiji, biaomianji);
	int gongzi, shangpin, result;
	printf("����������Ա�Ļ������ʣ�");
	scanf_s("%d", &gongzi);
	printf("����������Ա��������Ʒ��");
	scanf_s("%d", &shangpin);
	result = gongzi + shangpin * 1.5;
	printf("������Ա���¹����ǣ�%d\n", result);
	float x1, x2, result1, result2, data, result3, deta;
	printf("������ax^2+bx+c=0\n");
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
			printf("�÷��̵���������ͬΪ%1.3f", x1);
		}
		else
		{
			printf("�÷��̵��������ֱ�Ϊ%1.3f,%1.3f", x1, x2);
		}
	}
	else
	{
		printf("�÷����޽⡣");
	}

	return 0;
}