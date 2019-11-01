//TextCharFileCopy.c
//feof �Խ� ����� ���� ���� ���α׷�
#include <stdio.h>

int main()
{

	FILE *src = fopen("src.txt", "rt");
	FILE *des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL)
	{
		puts("file open fail");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)
		puts("file copy complet");
	else
	puts("file copy fail");
	fclose(src);
	fclose(des);

	return 0;
}