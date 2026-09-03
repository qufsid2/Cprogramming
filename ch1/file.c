#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

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