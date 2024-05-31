#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int gt(int n)
{
    if(n == 1 || n == 0) return 1;
    else if (n == 2) return 2;
    else if (n == 3) return 6;
    else if (n == 4) return 24;
    else if (n == 5) return 120;
    else if (n == 6) return 720;
    else if (n == 7) return 5040;
    else if (n == 8) return 40320;
    else if (n == 9) return 362880;
}

bool strong(int n)
{
    int sum = 0, a = n;
    while(n > 0)
    {
        sum += gt(n % 10);
        n /= 10;
    }
    if(a == sum) return 1;
    return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a < b)
    {
        for(int i = a; i <= b; i++)
        if(strong(i))
            printf("%d ", i);
    }
    else
    {
        for(int i = b; i <= a; i++)
            if(strong(i))
                printf("%d ", i);

    }
    return 0;
}
