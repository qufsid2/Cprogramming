// **********************************************************
//   제  목  :  파일 입출
//   날  짜  :  2026년 11월 17일
//   작성자  :  2600060 김혁중
// **********************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031);

#include <stdio.h>

int main(void) {
    FILE* tst = fopen("test.txt", "rt");
    FILE* res = fopen("result.txt", "wt");

    int ch;

    if (tst == NULL || res == NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }

    while (1) {
        ch = fgetc(tst);

        if (ch == EOF)
            break;

        if (ch == '.') {
            fputc('.', res);
            fputc('\n', res);
        }
        else
            fputc(ch, res);
    }

    fclose(tst);
    fclose(res);

    return 0;
}
