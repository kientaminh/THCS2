#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    long long tich = 1;
    while(n > 0)
    {
        tich *= n % 10;
        n /= 10;
    }
    printf("%lld", tich);
    return 0;
}
