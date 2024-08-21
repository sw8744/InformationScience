#include <stdio.h>

int main() {
    int a, b;
    a = 1; b = 2;
    printf("Hello World!\n");
    printf("%d %d\n", 3, 4);
    printf("%d, %d\n", a, b);
    
    int c, d;
    scanf("%d %d", &c, &d);
    printf("%d %d\n", c, d);
    scanf("%d %d", &c, &d);
    printf("%d %d\n", c, d);

    char e, f;
    scanf("%c%c", &e, &f);
    printf("%c, %c\n", e, f);

    char g[10], h[10];
    scanf("%s %s", g, h);
    printf("이름 : %s 별명 : %s", g, h);
}