#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *a, *b;
	int ch;
	a = fopen("C://Users/a/Desktop/107360239_�L���� 1227/P15/welcome.txt", "r");
	b = fopen("C://Users/a/Desktop/107360239_�L���� 1227/P15/output.txt", "w");
	if (a != NULL && b != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{
			putc(ch, b);

		}
		printf("�ɮ׶ǰe���\\n");
		fclose(a);
		fclose(b);
	}
	else
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	system("pause");
}