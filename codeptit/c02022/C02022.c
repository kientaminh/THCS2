#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i & 1)
        {
            for(int j = 1; j <= i; j++)
                printf("%d ", k++);
        }
        else
        {
            k = k + i - 1;
            for(int j = 1; j <= i; j++)
                printf("%d ", k--);
            k = k + i + 1;
        }
        printf("\n");
    }

    return 0;
}
