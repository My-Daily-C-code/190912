// 파일의 개방 모드
// 기준1: 읽기 위한 스트림이냐, 쓰기 위한 스트림이냐
// 기준2: 텍스트 데이터를 위한 스티림이냐, 바이너리 데이터를 위한 스트림이냐
#include <stdio.h>
#pragma error(disable: 4996)

int main()
{
	FILE * fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("file open failed");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is demian\n", fp);
	fputs("Ypur name is sung yun\n", fp);
	fclose(fp);

	return 0;
}

// 09에서 continue