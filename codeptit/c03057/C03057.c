#include <stdio.h>
#include <stdlib.h>

long long chuyen_mn(long long n)
{
    int d = 0;
    long long s = 0;
    while(n > 0)
    {
        if(n % 10 == 6) s += 5 * (long long)pow(10, d);
        else s += n % 10 * (long long)pow(10, d);
        d++;
        n /= 10;
    }
    return s;
}

long long chuyen_mx(long long n)
{
    int d = 0;
    long long s = 0;
    while(n > 0)
    {
        if(n % 10 == 5) s += 6 * (long long)pow(10, d);
        else s += n % 10 * (long long)pow(10, d);
        d++;
        n /= 10;
    }
    return s;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long x1, x2;
        scanf("%lld%lld", &x1, &x2);
        printf("%lld ", chuyen_mn(x1) + chuyen_mn(x2));
        printf("%lld\n", chuyen_mx(x1) + chuyen_mx(x2));
    }
    return 0;
}
