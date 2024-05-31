#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool snt(long long n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        if(snt(n))
            printf("%lld\n", n);
        else
        {
            long long res = 0;
            bool kt = 0;
            for(long long i = 1; i <= sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    if(snt(n / i))
                    {
                        printf("%lld\n", n / i);
                        kt = 1;
                        break;
                    }
                    if(snt(i))
                        res = i;
                }
            }
            if(kt == 0)
                printf("%lld\n", res);
        }
    }
    return 0;
}
