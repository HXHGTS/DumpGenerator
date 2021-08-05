#include <stdio.h>
#include <stdlib.h>

int i,j;
char FileName[20];
FILE* fp;

int main() {
	printf("需要多少个随机dump文件:");
	scanf("%d", &j);
	system("cls");
	printf("正在建立dump文件夹. . .\n");
	system("mkdir dump");
	for (i = 0; i <= j; i++) {
		printf("正在生成dump文件,进度:%d. . .\n",i);
		sprintf(FileName, "dump\\dump%d.txt", i);
		fp = fopen(FileName, "w");
		fprintf(fp, "%d\n",rand()* rand()* rand());
		fclose(fp);
	}
	printf("Completely!");
	system("pause > nul");
	return 0;
}