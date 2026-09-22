// **********************************************************
//   제  목  :  Call-by-value와 Call-by-reference를 이용해 값 구하
//   날  짜  :  2026년 9월 22일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int SBV(int num);
void SBR(int* num);

int main(void) {
    int num1 = 5;
    int num2 = 5;

    num1 = SBV(num1);
    printf("Call-by-value: %d\n", num1);

    SBR(&num2);
    printf("Call-by-reference: %d\n", num2);

    return 0;
}

int SBV(int num) {
    return num * 100;
}

void SBR(int* num) {
    *num *= 100;
}
