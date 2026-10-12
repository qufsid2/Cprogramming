// **********************************************************
//   제  목  :  함수 포인터를 활용하여 계산하기
//   날  짜  :  2026년 10월 8일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int div(int n1, int n2) {
    return n1 / n2;
}

int main(void) {
    int ch, x1, x2;
    int (*fp)(int, int);

    printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
    scanf("%d", &ch);

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &x1, &x2);

    switch (ch) {
    case 1:
        fp = add;
        break;
    case 2:
        fp = sub;
        break;
    case 3:
        fp = mul;
        break;
    case 4:
        fp = div;
        break;
    default:
        printf("잘못된 연산 선택입니다.\n");
        return 1;
    }

    printf("결과값: %d \n", fp(x1, x2));
    return 0;
}
