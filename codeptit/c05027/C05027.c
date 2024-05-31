#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long t, column = 1e6, row = 1e6;
    scanf("%lld", &t);
    while(t--)
    {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        if(row > a) row = a;
        if(column > b) column = b;
    }
    printf("%lld", row * column);
    return 0;
}
