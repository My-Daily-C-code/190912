// ������(Enumerated Type)�� ���ǿ� �ǹ�
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
		puts("���� �Ͼ� ������ "); return;
	case Re:
		puts("���� ��ŭ�� ����"); return;
	case Mi:
		puts("�̴� �Ķ� �̳���"); return;
	case Fa:
		puts("�Ĵ� ���� �Ķ���"); return;
	case So:
		puts("���� ���� �ֹ��"); return;
	case La:
		puts("��� ���϶��� ��"); return;
	case Ti:
		puts("�ô� ���� �ó���"); return;
	}
	puts("���Բ� �ҷ����ƿ�~~");

}

int main()
{
	Syllable tone;
	for (tone = Do; tone < Ti; tone += 1) // (tone = 1; tone<7; tone+=1)�� �ص� ���� �ǹ��̴�. 
		Sound(tone);


	return 0;
}