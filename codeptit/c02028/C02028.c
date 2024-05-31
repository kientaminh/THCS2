#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    char c;
    for(int i = 1; i <= n; i++)
    {
        c = 'A' + i * 2 - 2;
        for(int j = 1; j <= n - i + 1; j++)
        {
            printf("%c", c);
            c += 2;
        }

        printf("\n");
    }

    return 0;
}
