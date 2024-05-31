#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, l = 1, c = 4;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if(i & 1)
        {
            for(int j = 1; j <= l; j += 2)
                printf("%d", j);
            l += 4;
        }
        else
        {
            for(int j = 2; j <= c; j += 2)
                printf("%d", j);
            c += 4;
        }
        printf("\n");
    }

    return 0;
}
