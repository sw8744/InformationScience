#include <stdio.h>

int main() {
    char a = 'H';
    char b[10] = "H";
    char c[10] = "HELLO";
    // char d[10] = 'H'; -> Error: 문자열인데 작은 따옴표 할당

    char e[5] = "hell\0";
    char f[5] = {'h', 'e', 'l', 'l', '\0'};
    printf("%s %s", e, f);

    printf("%lu", sizeof(e) / sizeof(char));
    printf("\n");

    int n, i;
    char s[101];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%c", &s[i]);
    }
    for(i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}