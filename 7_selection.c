#include <stdio.h>

char fm;

int main() {
    scanf("%c", &fm);
    if(fm == 'f') {
        printf("female\n");
    }
    else {
        printf("male\n");
    }

    int a, b;
    a = 3; b = 0;
    if(a > 0)
        if(b > 0)
            printf("a와 b는 양수\n");
        else
            printf("a만 양수\n");
    else
        printf("a는 음수\n");

    if(0)
        printf("실행되지 않음\n");
    
    if(a != 3) printf("hello\n");
        printf("world\n");
    
    printf("%s", a == 3 ? "a는 3\n" : "a는 3이 아님\n");

    long long n;
    scanf("%lld", &n);
    if(n > 0) {
        printf("1\n");
    }
    else if(n < 0) {
        printf("-1\n");
    }
    else {
        printf("0\n");
    }

    int s;
    scanf("%d", &s);
    switch(s) {
        case 12: case 1: case 2:
            printf("winter\n");
            break;
        case 3: case 4: case 5:
            printf("spring\n");
            break;
        case 6: case 7: case 8:
            printf("summer\n");
            break;
        case 9: case 10: case 11:
            printf("fall\n");
            break;
    }
}