#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < 2 * n; j++)
        {
            if(j >= i && j <= 2 * n - i)
                printf("%d", n - i + 1);
            else if(j < i)
                printf("%d", n - j + 1);
            else printf("%d", j - n + 1);
        }
        printf("\n");
    }
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 1; j < 2 * n; j++)
        {
            if(j >= i && j <= 2 * n - i)
                printf("%d", n - i + 1);
            else if(j < i)
                printf("%d", n - j + 1);
            else printf("%d", j - n + 1);
        }
        printf("\n");
    }

    return 0;
}
