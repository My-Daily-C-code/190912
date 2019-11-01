// 파일 입출력 
// 파일에 데이터를 쓰는 예제
#include <stdio.h>
//#pragma error (disable: 4996)
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	FILE *fp = fopen("data.txt", "wt");
	if (fp == NULL)
	{
		puts("File open fail!");
		return -1; // 비정상적 종료를 의미하기 위해서 -1을 반환
	}
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);

	return 0;
}