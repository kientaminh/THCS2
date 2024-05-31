#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        int j = i;
        if(j > m)
        {
            printf("%d", j);
            j = m - 1;
        }
        else
        {
            for(; j <= m; j++)
                printf("%d", j);
            j = i - 1;
        }
        for(; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
