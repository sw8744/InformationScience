#include <stdio.h>

int main() {
    int a[10];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    int b[10] = {1, 2, 3, 4, 5};
    int c[] = {1, 2, 3, 4, 5};

    int n, d[10001], i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &d[i]);
    }
    for(i = 1; i <= n; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
    
    for(i = n; i >= 1; i--) {
        printf("%d ", d[i]);
    }
    printf("\n");

    int t;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &t);
        d[t] += 1;
    }
    for(i = 1; i <= 6; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
}