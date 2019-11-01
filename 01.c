//�پ��� ������ ����ü ����
#include <stdio.h.>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point ul; // �� ���
	Point lr; // �� ���

} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("����: %d\n",
		(rec.lr.xpos-rec.ul.xpos)*(rec.lr.ypos-rec.ul.ypos));
}

void ShowRecPod(Rectangle rec)
{
	printf("�� ���: [%d %d]\n", rec.ul.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d %d]\n", rec.ul.xpos, rec.lr.ypos);
	printf("�� ���: [%d %d]\n", rec.lr.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d %d]\n", rec.lr.xpos, rec.lr.ypos);
}

int main()
{
	Rectangle rec1 = { { 1, 1 }, { 4, 4 } };
	Rectangle rec2 = { { 0, 0 }, (7, 5) };
	ShowRecArea(rec1);
	ShowRecPod(rec1);
	ShowRecArea(rec2);
	ShowRecPod(rec2);

	return 0;
}