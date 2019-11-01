// 파일로 부터 데이터를 읽는 예저
#include <stdio.h>
#pragma error (disable: 4996)

int main()
{
	int ch, i;
	FILE *fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		puts("file open fail! ");
		return -1;
	}


	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c\n", ch);
	}
	fclose(fp);

	return 0;
}