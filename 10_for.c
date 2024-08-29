#include <stdio.h>

int main() {
    int i = 0;
    for(i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    // for(;;) {
    //     printf("%d", i);
    // }

    // for(i = 1; i++;) {
    //     printf("%d ", i);
    // }

    // for(i = 1; i < 10;) {
    //     printf("%d ", i);
    // }

    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    long long s = 0;
    for(i = 1; i < n; i++) {
        if(i % a == 0 || i % b == 0) {
            s += i;
        }
    }
    printf("%lld\n", s);

    int j, k;
    scanf("%d", &j);
    for(k = 2; k <= j;) {
        if(j % k == 0) {
            j = j / k;
        }
        else {
            k++;
        }
    }
    printf("%d", j);
}