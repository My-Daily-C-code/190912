//Union type (����ü)�� ���ǿ� �ǹ� 
#include <stdio.h.>
#pragma error(disable: 4996)

typedef struct sbox // ����ü sbox�� ����
{
	int mem1;
	int mem2;
	double mem3;
} Sbox;

typedef union ubx // ����ü ubox�� ����
{
	int mem1;
	int mem2;
	double mem3;

} Ubox;

int main()
{
	Sbox sbx;
	Ubox ubx;
	printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d\n", sizeof(Sbox), sizeof(Ubox));

	return 0;
}

// ����ü vs ����ü
// ����ü�� ����ü�� ���ǹ�Ŀ��� ������ �������� struct�� �����ϴ³�, union�� �����ϴ³��� �����̴�.
// �׷��� ������ ������ �޸� ������ �Ҵ�Ǵ� ��İ� ������ ������� ���� ���̰� �ִ�. 
// printf("%d %d\n", sizeof(Sbox), sizeof(Ubox));���� sizeof(Sbox) = 16�� sizeof(Ubox) = 8�� ����Ѵ�
// ���⼭ 16�� ��� ����� ũ�⸦ ���� ����̰�, 8�� ��� �߿��� ���� ũ�Ⱑ ū double�� ũ�⸸ ���� ����̴�. 