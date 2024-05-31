#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool snt(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

bool cs(int n)
{
    while(n > 0)
    {
        int x = n % 10;
        if(x != 2 && x != 3 && x != 5 && x != 7)
            return 0;
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
            if(cs(i))
                if(snt(i))
                    d++;
        printf("%d\n", d);
    }

    return 0;
}
