#include <stdio.h>

int main() {
    int a = 201;
    while(a != 205) {
        printf("%d\n", a);
        a++;
    }

    int n = 0;
    int cnt = 0;
    scanf("%d", &n);
    int i = 1;
    while(n >= i) {
        if(n % i == 0) {
            cnt++;
        }
        i++;
    }
    printf("%d\n", cnt);

    int c, count, ansCount, ansNum, j, k;
    ansCount = 0;
    ansNum = 0;
    scanf("%d", &c);
    j = 1;
    while(j <= c) {
        k = 1;
        count = 0;
        while(k <= j) {
            if(j % k == 0) {
                count++;
            }
            k++;
        }
        if(count > ansCount) {
            ansCount = count;
            ansNum = j;
        }
        j++;
    }
    printf("%d %d", ansNum, ansCount);
}