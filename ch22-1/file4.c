#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>
#include <string.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point p1 = { 10, 10 }, p2 = { 20, 20 };
	int xtp, ytp;

	printf("교환 전 P1의 좌표: (%d, %d) \n", p1.x, p1.y);
	printf("교환 전 P2의 좌표: (%d, %d) \n", p2.x, p2.y);

	xtp = p1.x;
	p1.x = p2.x;
	p2.x = xtp;

	ytp = p1.y;
	p1.y = p2.y;
	p2.y = p1.y;

	printf("교환 후 P1의 좌표: (%d, %d) \n", p1.x, p1.y);
	printf("교환 후 P2의 좌표: (%d, %d) \n", p2.x, p2.y);

	return 0;
}
