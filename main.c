#include <stdio.h>
#include <stdlib.h>

int i,j;
char FileName[20];
FILE* fp;

int main() {
	printf("��Ҫ���ٸ����dump�ļ�:");
	scanf("%d", &j);
	system("cls");
	printf("���ڽ���dump�ļ���. . .\n");
	system("mkdir dump");
	for (i = 0; i <= j; i++) {
		printf("��������dump�ļ�,����:%d. . .\n",i);
		sprintf(FileName, "dump\\dump%d.txt", i);
		fp = fopen(FileName, "w");
		fprintf(fp, "%d\n",rand()* rand()* rand());
		fclose(fp);
	}
	printf("Completely!");
	system("pause > nul");
	return 0;
}