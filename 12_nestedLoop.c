#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    int k = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", k++);
        }
        printf("\n");
    }

    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 2) {
            for(j = 1; j <= n; j++) {
                printf("%d ", (i - 1) * n + j);
            }
        }
        else {
            for(j = 1; j <= n; j++) {
                printf("%d ", i * n - j + 1);
            }
        }
        printf("\n");
    }
}