#define _CRT_SECURE_NO_WARNINGS//可以讓scanf不用再加上_s
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define enter 13//Enter 鍵的值為13

int main()
{
	FILE *a;
	char q[80];
	int i = 0;
	int ch;
	a = fopen("C://Users/a/Desktop/107360239_林哲楷 1227/P16/output.txt", "a");//fopen("檔案名稱","開啟模式");

	printf("請輸入字串，按ENTER鍵結束輸入：\n");
	if (a == NULL)//檔案如果沒開成功會回傳NULL
	{
		printf("檔案傳送失敗\n");
	}

	else
	{
		while ((ch = _getche()) != enter && i < 80)//getche不會等待使用者使用空白鍵(非緩衝區)
		{
			q[i++] = ch;
		}
		fwrite(q, sizeof(char), i, a);//q這個東西傳到A裡面，然後總共執行i次
		fclose(a);
		printf("檔案附加成功\n");
	}


	system("pause");

}