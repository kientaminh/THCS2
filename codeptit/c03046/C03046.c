#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool dx(int n)
{
    int s = 0, a = n, res = 0;
    while(n > 0)
    {
        if(n % 10 == 4)
            return 0;
        s += n % 10;
        res = res * 10 + n % 10;
        n /= 10;
    }
    if(res == a && s % 10 == 0)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a = pow(10, n - 1), b = pow(10, n);
        for(int i = a; i < b; i++)
            if(dx(i))
                printf("%d ", i);
        printf("\n");

    }
    return 0;
}
