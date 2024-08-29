#include <stdio.h>

int main() {
    int a, b;
    for(a = 1; a <= 20; a++) {
        if(a == 6) {
            break;
        }
        else {
            printf("%d는 청소당번\n", a);
        }
    }

    for(b = 1; b <= 21; b++) {
        if(b <= 5) {
            continue;
        }
        else {
            printf("%d는 청소당번\n", b);
        }
    }

    int i, n;
    scanf("%d", &n);
    for(i = 2; i < n; i++) {
        if(n % i != 0) {
            continue;
        }
        else {
            break;
        }
    }
    printf("%s\n", i == n ? "prime" : "conposite");

    int j, k;
    scanf("%d", &k);
    for(j = 2; j < k && k % j != 0; j++);
    printf("%s\n", j == k ? "prime" : "conposite");
}