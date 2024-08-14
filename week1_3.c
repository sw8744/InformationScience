#include <stdio.h>

int main() {
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(int));

    short i = 32767 + 1;
    printf("%d\n", i);

    short j = 32768 - 1;
    printf("%d\n", j);

    // float a = 3.14159;
    // double b = 1.79e+308;
    // printf("%f\n", a);
    // printf("%e\n", b);

    // char c = 'A';
    // printf("%d %c", c, c);

    int d, e;
    long long f;
    d = 012;
    e = 0xff;
    f = 2147483647LL;
    printf("%d %d %lld\n", d, e, f);

    double g;
    float h;
    g = 1.5e+03;
    h = -3.4e38F;
    printf("%lf %f\n", g, h);

    char a, b, c;
    a = 'A'; b = '0'; c = '\n';
    printf("%d %c %c", a, a, c);
    printf("%d %c %c", b, b, c);
    printf("%d\n", c);
    printf("hello\rworld\n");

    #define PI 3.14
    int r = 5;
    printf("원의 면적 : %f\n", PI * r * r);
    printf("원의 둘레 : %f\n", 2 * PI * r);
    printf("구의 부피 : %f\n", (4.0/3.0) * PI * r * r * r);
}