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
            if(j <= n - i)
                printf("~");
            else if(j > n - i && j <= 2 * n - i)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
