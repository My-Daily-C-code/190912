// 공용체의 유용함은 다양한 접근 방식을 제공하는데 있음. --> 하나의 메모리 공간을 둘 이상의 방식으로 접근 할 수 있다. 
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

	printf("상위 2byte: \n", buf.sBuf.upper);
	printf("하위 2byte: \n", buf.sBuf.lower);
	printf("상위 1byte ASC code: %c", buf.bBuf[0]);
	printf("하위 1byte ASC code: %c", buf.bBuf[3]);
	return 0;

}