#include <stdio.h>
#include <stdlib.h>

long long gt(long long n)
{
    if(n == 1) return 1;
    return n * gt(n - 1);
}

int main()
{
    long long n;
    scanf("%d", &n);
    printf("1\n");
    for(int i = 1; i < n; i++)
    {
        long long h = gt(i);
        printf("1 ");
        for(int j = 1; j < i; j++)
        {
            long long c = gt(j);
            printf("%lld ", h / (c * gt(i - j)));
        }
        printf("1\n");
    }

    return 0;
}
