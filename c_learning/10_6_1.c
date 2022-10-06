# include<stdio.h>
int main()
{
	char cChar1;
	char cChar2;
	char cChar3;
	char cChar4;
	char cChar5;
	char cChar6;
	char cChar7;
	char cChar8;
	char cChar9;
	cChar1 = getchar();
	cChar2 = getchar();
	cChar3 = getchar();
	cChar4 = getchar();
	cChar5 = getchar();
	cChar6 = getchar();
	cChar7 = getchar();
	cChar8 = getchar();
	cChar9 = getchar();
	putchar(cChar1);
	putchar(cChar2);
	putchar(cChar3);
	putchar(cChar4);
	putchar(cChar5);
	putchar(cChar6);
	putchar(cChar7);
	putchar(cChar8);
	putchar(cChar9);
	int cChar10;
	printf("\n");
	cChar10 = getchar();
	putchar(cChar10 + 32);
	printf("\n");
	char cString[50];
	gets(cString);
	puts(cString);
	return 0;
}