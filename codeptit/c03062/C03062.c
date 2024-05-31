#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
        int n, m;
        scanf("%d%d", &n, &m);
        long long tich = 1;
        for(long long i = n; i <= m; i++)
            tich = lcm(tich, i);
        printf("%lld\n", tich);
    }

    return 0;
}
