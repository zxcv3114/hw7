
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	int count = 0;
	char ch;
	int err;
	err = fopen_s(&a,"C://Users/a/Desktop/107360239_�L���� 1227/P14/welcome.txt", "r");

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
		printf("�ɮ׶}�ҥ���\n");
	}
	printf("\n�`�@��%d�Ӧr��\n", count);
	system("pause");
}