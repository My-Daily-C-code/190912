// UnionValAccess.c
#include <stdio.h>
#pragma error(disable:4996)

typedef union ubox // 공용체 ubox의 정의
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main()
{
	UBox ubx; // 8byte memory 할당
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	ubx.mem3 = 7.15;
	printf("%d\n", ubx.mem1);
	printf("%d\n", ubx.mem2);
	printf("%g\n", ubx.mem3);

	return 0;
}
// 구조체 변수가 선언되면, 구조체를 구성하는 멤베는 각각 할당이 된다. 반면 공용체 변수가 선언되면, 공용체를 구성하는 멤버는 각각 할당이 되지 않고,
// 그 중 크기가 가장 큰 멤버의 변수만 하나 할당되어 이를 공유하게 된다. 