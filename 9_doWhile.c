#include <stdio.h>

int main() {
    int a = 0;
    while(a) {
        printf("%d\n", a);
    }

    do {
        printf("%d\n", a);
    } while(a);

    int i, n;
    scanf("%d", &n);

    i = 2;
    do {
        if(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
        else {
            i++;
        }
    } while(i <= n);
}