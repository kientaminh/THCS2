#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool dx(int n)
{
    int a[8] = {0}, size = 0;
    while(n > 0)
    {
        a[size++] = n % 10;
        n /= 10;
    }
    for(int i = 0; i <= size / 2; i++)
        if(a[i] != a[size - i - 1])
            return 0;
    return 1;
}

bool snt(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, d = 1;
        scanf("%d%d", &a, &b);
        for(int i = a; i <= b; i++)
        {
            if(dx(i))
            {
                if(snt(i))
                {
                    printf("%d ", i);
                    if(d % 10 == 0)
                        printf("\n");
                    d++;
                }
            }
        }
        printf("\n\n");
    }

    return 0;
}
