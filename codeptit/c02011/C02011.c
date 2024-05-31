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
        int j = i, d = 1;
        if(j <= m)
        {
            for(; j <= m; j++)
            {
                printf("%d", j);
                d++;
            }
            j = m - 1;
        }
        for(; j >= 1 && d <= m; j--)
        {
            printf("%d", j);
            d++;
        }
        printf("\n");
    }

    return 0;
}
