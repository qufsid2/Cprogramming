// **********************************************************
//   제  목  :  2차원 배열 원소 중 최댓값과 그 위치 구하기
//   날  짜  :  2026년 10월 1일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {
	int x1[3][3] = { { -5, 2, 35 }, { -20, 5, 100 }, { -75, 5, -25 } };
	int max = x1[0][0];
	int row = 1, column = 1;
	
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (x1[i][j] > max) {
				max = x1[i][j];
				row = i + 1;
				column = j + 1;
			}

	printf("최댓값은 %d \n", max);
	printf("위치는 %d행 %d열 \n", row, column);

	return 0;
}
