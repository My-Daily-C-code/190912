// ���� ����� 
// ���Ͽ� �����͸� ���� ����
#include <stdio.h>
//#pragma error (disable: 4996)
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	FILE *fp = fopen("data.txt", "wt");
	if (fp == NULL)
	{
		puts("File open fail!");
		return -1; // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);

	return 0;
}