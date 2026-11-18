// **********************************************************
//   제  목  :  struct 구조체
//   날  짜  :  2026년 11월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* a, Point* b) {
	Point temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(&pos1, &pos2);
	printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);

	return 0;
}
