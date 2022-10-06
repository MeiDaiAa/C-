# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define HEG 10
int caculate(int Long, int Width);
int main()
{
	int m_Long;
	int m_Width;
	int result;
	printf("长方形的高度为：%d\n", HEG);

	printf("请输入长度:\n");
	scanf("%d", &m_Long);
	 
	printf("请输入长方形的宽度：\n");
	scanf("%d", & m_Width);

	result = caculate(m_Long, m_Width);
	printf("长方形的体积是:");
	printf("%d\n", & result);
	return 0;
}
int caculate(m_Long, m_Width)
{
	int result = m_Long* m_Width* HEG;
	return result;
}