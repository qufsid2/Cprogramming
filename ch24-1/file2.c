// **********************************************************
//   제  목  :  파일 입출
//   날  짜  :  2026년 11월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
    FILE* fp = fopen("test.txt", "rt");
    int ch;

    if (fp == NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        if (ch == '.')
            printf(".\n");
        else
            fputc(ch, stdout);
    }

    fclose(fp);

    return 0;
}
