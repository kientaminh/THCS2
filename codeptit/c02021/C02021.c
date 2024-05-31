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
        int c = i, m = n;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", c);
            c += m - 1;
            m--;
        }
        printf("\n");
    }

    return 0;
}
