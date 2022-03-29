#include <stdio.h>
//输入三个字符（可以重复）后，按各字符的ASCII码从小到大的顺序输出这三个字符。
int main() {
    char a;
    char b;
    char c;
    char temp;
    int T;

    scanf("%d", &T);
    getchar();

    while (T--) {
        scanf("%c%c%c", &a, &b, &c);
        getchar();

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}