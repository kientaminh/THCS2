#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    unsigned int a = n;
    while(a > 0)
    {
        if(a < 10) printf("%u ", a);
        a /= 10;
    }
    printf("%u", n % 10);
    return 0;
}
