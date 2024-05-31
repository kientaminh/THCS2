#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool snt(long long n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long i = 2;
    while(1)
    {
        if(n == 0) break;
        if(snt(i))
        {
            printf("%lld\n", i);
            n--;
        }
        i++;
    }

    return 0;
}
