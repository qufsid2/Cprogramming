// **********************************************************
//   제  목  :  구조체, 공용체, 열거형
//   날  짜  :  2026년 11월 12일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

typedef enum {
	UP, DOWN, LEFT, RIGHT
} Direction;

int main(void) {
	Direction d;

	switch (d) {
	case UP: puts("현재방향 위"); break;
	case DOWN: puts("현재방향 아래"); break;
	case LEFT: puts("현재방향 왼쪽"); break;
	case RIGHT: puts("현재방향 오른쪽"); break;
	}

	return 0;
}
