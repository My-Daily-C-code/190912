// UnionValAccess.c
#include <stdio.h>
#pragma error(disable:4996)

typedef union ubox // ����ü ubox�� ����
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main()
{
	UBox ubx; // 8byte memory �Ҵ�
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	ubx.mem3 = 7.15;
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);

	return 0;
}
// ����ü ������ ����Ǹ�, ����ü�� �����ϴ� �⺣�� ���� �Ҵ��� �ȴ�. �ݸ� ����ü ������ ����Ǹ�, ����ü�� �����ϴ� ����� ���� �Ҵ��� ���� �ʰ�,
// �� �� ũ�Ⱑ ���� ū ����� ������ �ϳ� �Ҵ�Ǿ� �̸� �����ϰ� �ȴ�. 