// ����ü�� �������� �پ��� ���� ����� �����ϴµ� ����. --> �ϳ��� �޸� ������ �� �̻��� ������� ���� �� �� �ִ�. 
#include <stdio.h>
#pragma error (disable: 4996)

typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DBshort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBshort sBuf;
} RDBuf;

int main()
{
	RDBuf buf;
	printf("insert the number: ");
	scanf("%d", &(buf.iBuf));

	printf("���� 2byte: \n", buf.sBuf.upper);
	printf("���� 2byte: \n", buf.sBuf.lower);
	printf("���� 1byte ASC code: %c", buf.bBuf[0]);
	printf("���� 1byte ASC code: %c", buf.bBuf[3]);
	return 0;

}