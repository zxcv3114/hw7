#define _CRT_SECURE_NO_WARNINGS//�i�H��scanf���ΦA�[�W_s
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define enter 13//Enter �䪺�Ȭ�13

int main()
{
	FILE *a;
	char q[80];
	int i = 0;
	int ch;
	a = fopen("C://Users/a/Desktop/107360239_�L���� 1227/P16/output.txt", "a");//fopen("�ɮצW��","�}�ҼҦ�");

	printf("�п�J�r��A��ENTER�䵲����J�G\n");
	if (a == NULL)//�ɮצp�G�S�}���\�|�^��NULL
	{
		printf("�ɮ׶ǰe����\n");
	}

	else
	{
		while ((ch = _getche()) != enter && i < 80)//getche���|���ݨϥΪ̨ϥΪť���(�D�w�İ�)
		{
			q[i++] = ch;
		}
		fwrite(q, sizeof(char), i, a);//q�o�ӪF��Ǩ�A�̭��A�M���`�@����i��
		fclose(a);
		printf("�ɮת��[���\\n");
	}


	system("pause");

}