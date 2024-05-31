#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int snt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}
int check(int n)
{
    if(!snt(n))
        return 0;
    int x = 0;
    while(n > 0)
    {
        x = x * 10 + n % 10;
        n /= 10;
    }
    if(snt(x))
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
    {
        if(check(a[i]))
            printf("%d ", 1);
        else printf("%d ", 0);
    }


    return 0;
}
