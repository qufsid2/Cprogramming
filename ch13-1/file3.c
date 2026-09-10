// **********************************************************
//   제  목  :  299번 문제1 변형 후 풀기
//   날  짜  :  2026년 9월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    double arr[5];
    double* ptr;
    int i;

    ptr = arr;

    for (i = 0; i < 5; i++) {
        printf("실수 입력: ");
        scanf("%lf", ptr++);
    }

    ptr = arr;

    for (i = 0; i < 5; i++) {
        *ptr += 2;
        ptr++;
    }

    ptr = arr;

    printf("\n2씩 증가된 배열의 값:\n");

    for (i = 0; i < 5; i++)
        printf("%.2f ", *ptr++);

    return 0;
}
