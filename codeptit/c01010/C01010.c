#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d ", n/365);
    if(n >= 365) n =n - (n / 365 * 365);
    printf("%d ", n/7);
    n = n - (n / 7 * 7);
    printf("%d", n);

    return 0;
}
