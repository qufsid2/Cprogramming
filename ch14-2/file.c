#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

void separate(double num, int* integer, double* decimal);

int main(void) {
    double num;
    int integer;
    double decimal;

    printf("실수를 입력하시오: ");
    scanf("%lf", &num);

    separate(num, &integer, &decimal);

    printf("정수부 : %d\n", integer);
    printf("소수부 : %lf\n", decimal);

    return 0;
}

void separate(double num, int* integer, double* decimal)
{
    *integer = (int)num;
    *decimal = num - *integer;
}