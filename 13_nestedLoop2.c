#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i <= 2 * n - 1; i++) {
        if(i <= n) {
            for(j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for(j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            for(j = 1; j <= n - i; j++) {
                printf(" ");
            }
            printf("\n");
        }
        else if(i > n) {
            for(j = 1; j <= i - n; j++) {
                printf(" ");
            }
            for(j = 1; j <= (2 * n - 1) - 2 * (i - n); j++) {
                printf("*");
            }
            for(j = 1; j <= i - n; j++) {
                printf(" ");
            }
            printf("\n");
        }
    }
}