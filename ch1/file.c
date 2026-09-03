#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

// ***********************************************
//   제  목 : a, b, c를 주소연산자(&)를 이용하여 출력
//   날  짜 : 2026년 9월 3일
//   작성자 : 2600060 김혁중
// ***********************************************

#include <stdio.h>

int main() {
    char a = 'A';
    int b = 36;
    double c = 3.141592;

    printf("char형 변수 a의 주소: %x \n", &a);
    printf("int형 변수 b의 주소: %x \n", &b);
    printf("double형 변수 c의 주소: %x \n", &c);

    return 0;
}
