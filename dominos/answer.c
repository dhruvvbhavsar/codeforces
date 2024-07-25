#include<stdio.h>
#include<math.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);

    if(n > m) {
        int x = m;
        m = n;
        n=x;
    }

    int max;
    max = floor(m*n/2);
    printf("%d", max);
    return 0;
}