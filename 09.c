#include <stdio.h>
//#pragma error(disable: 4996)
#define _CRT_SECURE_NO_WARNNINGS
int main()
{
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("file open failed");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);

	return 0;
}