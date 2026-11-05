// **********************************************************
//   제  목  :  구조체 속 구조체를 이용해 직각삼각형 구하기
//   날  짜  :  2026년 11월 5일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031);

#include <stdio.h>
#include <string.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct triangle {
	struct point p1;
	struct point p2;
	struct point p3;
};

int main(void) {
	struct triangle t;
	int a, b, c;

	printf("1번째 점(x, y) 입력: ");
	scanf("%d %d", &t.p1.x, &t.p1.y);

	printf("2번째 점(x, y) 입력: ");
	scanf("%d %d", &t.p2.x, &t.p2.y);

	printf("3번째 점(x, y) 입력: ");
	scanf("%d %d", &t.p3.x, &t.p3.y);

	a = pow(t.p1.x - t.p2.x, 2) + pow(t.p1.y - t.p2.y, 2);
	b = pow(t.p2.x - t.p3.x, 2) + pow(t.p2.y - t.p3.y, 2);
	c = pow(t.p3.x - t.p1.x, 2) + pow(t.p3.y - t.p1.y, 2);

	if (a + b == c || a + c == b || b + c == a)
		printf("삼각형은 직각삼각형임 \n");
	else
		printf("삼각형은 직각삼각형이 아님 \n");

	return 0;
}
