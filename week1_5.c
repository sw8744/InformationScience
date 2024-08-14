#include <stdio.h>

int main() {
    printf("%d\n", 4 / 2);
    printf("%f\n", 4.0 / 2);
    // printf("%f\n", 4 % 2.0); → 식에 정수 계열이 있어야 함

    int a = 4; float b = 2.0; a = b;
    printf("%d\n", a);
    printf("%f\n", 4.0/2);
    printf("%f\n", (float)10/4);

    int x = 2, y = 3;
    printf("%d\n", ((x++) * (y++)) % 10);
    printf("%d\n", (x * y) % 10);

    int k = 10;
    printf("%d\n", k++);
    printf("%d\n", ++k);

    int x1, x2, x3, x4, x5, x6;
    int n, m, l;
    n = 45; m = 15; l = 60;
    x1 = n == 45;
    x2 = n % m != 0;
    x3 = n > m;
    x4 = n > m && n > l;
    x5 = n > m || n < l;
    x6 = !(n >= m && m >= l);
    printf("%d %d %d %d %d %d\n", x1, x2, x3, x4, x5, x6);

    printf("%d %d %d %d %d\n", 10 & 7, 10 | 7, 10 ^ 7, 2 << 3, 15 >> 2);
}