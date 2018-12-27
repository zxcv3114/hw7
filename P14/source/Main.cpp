
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	int count = 0;
	char ch;
	int err;
	err = fopen_s(&a,"C://Users/a/Desktop/107360239_林哲楷 1227/P14/welcome.txt", "r");

	if (a != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{

			printf("%c", ch);
			count++;
		}
		fclose(a);
	}
	else
	{
		printf("檔案開啟失敗\n");
	}
	printf("\n總共有%d個字元\n", count);
	system("pause");
}