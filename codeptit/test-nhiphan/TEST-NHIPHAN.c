#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[11] = {0}, p = 0;
    if(n == 0)
    {
        printf("0");
        return 0;
    }
    while(n > 0)
    {
        a[p++] = n % 2;
        n /= 2;
    }
    for(int i = p - 1; i >= 0; i--)
        printf("%d", a[i]);
    return 0;
}
