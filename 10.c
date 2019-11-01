//TextCharFileCopy.c
//feof 함스 기반의 차일 복사 프로그램
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