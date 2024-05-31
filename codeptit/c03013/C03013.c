#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
long long f[100];

void fib(int n)
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
}

int main()
{
    int n;
    scanf("%d", &n);
    fib(n);
    for(int i = 0; i < n; i++)
        printf("%lld ", f[i]);
    return 0;
}
