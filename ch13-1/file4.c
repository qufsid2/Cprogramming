// **********************************************************
//   제  목  :  300쪽 2번 문제 변형해서 5개의 방법으로 풀기
//   날  짜  :  2026년 9월 10일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    double a[5];
    double* ptr = a;
    int i;

    // ① 배열 표현
    for (i = 0; i < 5; i++)
        scanf("%lf", &a[i]);

    for (i = 0; i < 5; i++)
        a[i] += 2;

    printf("① 배열 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.1f ", a[i]);
    printf("\n");


    // ② 배열명을 이용한 주소 표현
    for (i = 0; i < 5; i++)
        scanf("%lf", a + i);

    for (i = 0; i < 5; i++)
        *(a + i) += 2;

    printf("② 배열명을 이용한 주소 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.1f ", *(a + i));
    printf("\n");


    // ③ 포인터 변수를 이용한 배열 표현
    for (i = 0; i < 5; i++)
        scanf("%lf", ptr + i);

    for (i = 0; i < 5; i++)
        ptr[i] += 2;

    printf("③ 포인터 변수를 이용한 배열 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.1f ", ptr[i]);
    printf("\n");


    // ④ 포인터 변수를 이용한 주소 표현
    for (i = 0; i < 5; i++)
        scanf("%lf", ptr + i);

    for (i = 0; i < 5; i++)
        *(ptr + i) += 2;

    printf("④ 포인터 변수를 이용한 주소 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.1f ", *(ptr + i));
    printf("\n");


    // ⑤ 포인터에 덧셈 연산을 이용한 주소 표현
    for (i = 0; i < 5; i++)
        scanf("%lf", ptr + i);

    for (i = 0; i < 5; i++)
        *(ptr + i) += 2;

    printf("⑤ 포인터 덧셈 연산을 이용한 주소 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.1f ", *(ptr + i));

    return 0;
}
