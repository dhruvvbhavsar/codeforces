#include<stdio.h>

int main() {
    int n,m,a;

    scanf("%d %d %d", &n, &m, &a);

    long long count = ((n+a-1)/a) * ((m+a-1)/a);

    printf("%lld", count);
    return 0;
}