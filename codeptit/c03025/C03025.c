#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


bool snt(long long n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

bool cs(long long n)
{
    long long sum = 0;
    while(n > 0)
    {
        if(!snt(n % 10))
            return false;
        sum += n % 10;
        n /= 10;
    }
    if(!snt(sum))
        return false;
    return true;
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long a, b, d = 0;
        scanf("%lld%lld", &a, &b);
        for(long long i = a; i <= b; i++)
            if(cs(i))
                if(snt(i))
                    d++;
        printf("%lld\n", d);
    }

    return 0;
}
