// **********************************************************
//   제  목  :  구조체를 이용해 사각형의 폭과 높이 구하기
//   날  짜  :  2026년 11월 3일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

struct quadrangle {
	int x1, x2;
	int y1, y2;
	int w, h;
};

int main(void) {
	struct quadrangle q;
	int xtp, ytp;

	printf("좌측상단의 좌표 입력: ");
	scanf("%d %d", &q.x1, &q.y1);

	printf("우측하단의 좌표 입력: ");
	scanf("%d %d", &q.x2, &q.y2);

	if (q.x1 < q.x2) {
		xtp = q.x1;
		q.x1 = q.x2;
		q.x2 = xtp;
	}

	if (q.y1 < q.y2) {
		ytp = q.y1;
		q.y1 = q.y2;
		q.y2 = ytp;
	}

	q.w = q.x1 - q.x2;
	q.h = q.y1 - q.y2;

	printf("사각형의 폭: %d \n", q.w);
	printf("사각형의 높이: %d \n", q.h);

	return 0;
}
