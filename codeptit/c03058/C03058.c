#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long long gcd(long long a, long long b)
{
    while(b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long res = 1;
        for(long long i = 2; i <= n; i++)
            res = lcm(i, res);
        printf("%lld\n", res);
    }

    return 0;
}
