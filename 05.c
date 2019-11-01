// 열거형(Enumerated Type)의 정의와 의미
#include <stdio.h>
#pragma error(disable: 4996)

typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지 "); return;
	case Re:
		puts("레는 상큼한 레몬"); return;
	case Mi:
		puts("미는 파란 미나리"); return;
	case Fa:
		puts("파는 예쁜 파랑새"); return;
	case So:
		puts("솔은 작은 솔방울"); return;
	case La:
		puts("라는 라일락의 라"); return;
	case Ti:
		puts("시는 졸졸 시냇물"); return;
	}
	puts("다함께 불러보아요~~");

}

int main()
{
	Syllable tone;
	for (tone = Do; tone < Ti; tone += 1) // (tone = 1; tone<7; tone+=1)로 해도 같은 의미이다. 
		Sound(tone);


	return 0;
}