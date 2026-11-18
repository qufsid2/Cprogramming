// **********************************************************
//   제  목  :  파일 입출
//   날  짜  :  2026년 11월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
    FILE* fp = fopen("result.txt", "wt");

    char ch[100];
    int i = 0;

    if (fp == NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }

    printf("문자열을 입력하시오: ");
    fgets(ch, sizeof(ch), stdin);

    while (1) {
        if (ch[i] == '\0')
            break;

        if (ch[i] == ' ')
            fputc('\n', fp);
        else
            fputc(ch[i], fp);

        i++; 
    }

    fclose(fp);

    return 0;
}
