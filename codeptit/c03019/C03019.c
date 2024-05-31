#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool chia10_dx(long long n)
{
    long long d = 0, a = n, s = 0;
    while(n > 0)
    {
        s += n % 10;
        d = d * 10 + n % 10;
        n /= 10;
    }
    if(s % 10 == 0 && d == a)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        int d = 0;
        long long a = pow(10, n - 1), b = pow(10, n);
        for(long long i = a; i < b; i++)
        {
            if(chia10_dx(i))
                d++;
        }
        printf("%d\n", d);
    }
    return 0;
}
