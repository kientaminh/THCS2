#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

long long f[101];

void fib(int n)
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
}

int main()
{
    fib(100);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        bool kt = 0;
        for(int i = 0; i <= 100; i++)
        {
            if(n == f[i])
            {
                printf("YES\n");
                kt = 1;
                break;
            }
        }
        if(kt == 0)
            printf("NO\n");
    }

    return 0;
}
