#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool so_giam(int n)
{
    int x = n % 10;
    n /= 10;
    while(n > 0)
    {
        if(x >= n % 10)
            return 0;
        x = n % 10;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, d = 0;
        scanf("%d%d", &a, &b);
        for(int i = a; i <= b; i++)
            if(so_giam(i))
                d++;
        printf("%d\n", d);
    }

    return 0;
}
