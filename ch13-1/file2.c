// **********************************************************
//   제  목  :  오류를 찾은 후 포인터로 해결하기
//   날  짜  :  2026년 9월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main() {
	int a[] = {10, 20, 30};
    int *p = &a;
    int i, sum = 0;

    for (i = 0; i < 3; i++)
        sum += *p++;

    printf("sum:%d\n", sum);

    return 0;
}
