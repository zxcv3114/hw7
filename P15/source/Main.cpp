#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *a, *b;
	int ch;
	a = fopen("C://Users/a/Desktop/107360239_林哲楷 1227/P15/welcome.txt", "r");
	b = fopen("C://Users/a/Desktop/107360239_林哲楷 1227/P15/output.txt", "w");
	if (a != NULL && b != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{
			putc(ch, b);

		}
		printf("檔案傳送成功\n");
		fclose(a);
		fclose(b);
	}
	else
	{
		printf("檔案開啟失敗\n");
	}
	system("pause");
}