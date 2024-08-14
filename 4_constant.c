#include <stdio.h>

int test();

int main() {
    #define PI 3.14
    const int a = 1;
    test();
}

int test() {
    printf("%f\n", PI);
    // printf("%d", a); → Not Define Error
}