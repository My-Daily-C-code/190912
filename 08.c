// ������ ���� ���
// ����1: �б� ���� ��Ʈ���̳�, ���� ���� ��Ʈ���̳�
// ����2: �ؽ�Ʈ �����͸� ���� ��Ƽ���̳�, ���̳ʸ� �����͸� ���� ��Ʈ���̳�
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

// 09���� continue