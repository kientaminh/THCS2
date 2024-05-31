#include <stdio.h>
#include <stdlib.h>

long long fib(int n)
{
    long long f[100];
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fib(n));
    }

    return 0;
}
