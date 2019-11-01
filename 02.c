//Union type (공용체)의 정의와 의미 
#include <stdio.h.>
#pragma error(disable: 4996)

typedef struct sbox // 구도체 sbox의 정의
{
	int mem1;
	int mem2;
	double mem3;
} Sbox;

typedef union ubx // 공용체 ubox의 정의
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

// 구조체 vs 공용체
// 구조체와 공용체의 정의방식에서 유일한 차이점은 struct를 정의하는냐, union을 선언하는냐의 차이이다.
// 그러나 각각의 변수가 메모리 공간에 할당되는 방식과 접근의 결과에는 많은 차이가 있다. 
// printf("%d %d\n", sizeof(Sbox), sizeof(Ubox));에서 sizeof(Sbox) = 16을 sizeof(Ubox) = 8을 출력한다
// 여기서 16은 모든 멤버의 크기를 합한 결과이고, 8은 멤버 중에서 가장 크기가 큰 double의 크기만 계산된 결과이다. 