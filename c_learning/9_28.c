# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define HEG 10
int caculate(int Long, int Width);
int main()
{
	int m_Long;
	int m_Width;
	int result;
	printf("�����εĸ߶�Ϊ��%d\n", HEG);

	printf("�����볤��:\n");
	scanf("%d", &m_Long);
	 
	printf("�����볤���εĿ�ȣ�\n");
	scanf("%d", & m_Width);

	result = caculate(m_Long, m_Width);
	printf("�����ε������:");
	printf("%d\n", & result);
	return 0;
}
int caculate(m_Long, m_Width)
{
	int result = m_Long* m_Width* HEG;
	return result;
}