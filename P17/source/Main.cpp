#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	char q[80];
	int i;
	a = fopen("C://Users/a/Desktop/107360239_�L���� 1227/P17/output.txt", "r");
	if (a == NULL)
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	else
	{
		i = fread(q, sizeof(char), 79, a);
		q[i] = '\0';
		printf("%s\n", q);
	}
	fclose(a);
	system("pause");
}