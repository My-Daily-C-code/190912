//다양한 형태의 구조체 정의
#include <stdio.h.>
#pragma error (disable: 4996)

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point ul; // 좌 상단
	Point lr; // 우 상단

} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("넓이: %d\n",
		(rec.lr.xpos-rec.ul.xpos)*(rec.lr.ypos-rec.ul.ypos));
}

void ShowRecPod(Rectangle rec)
{
	printf("좌 상단: [%d %d]\n", rec.ul.xpos, rec.ul.ypos);
	printf("좌 하단: [%d %d]\n", rec.ul.xpos, rec.lr.ypos);
	printf("우 상단: [%d %d]\n", rec.lr.xpos, rec.ul.ypos);
	printf("우 하단: [%d %d]\n", rec.lr.xpos, rec.lr.ypos);
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