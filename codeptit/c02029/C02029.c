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
    int k;
    for(int i = 1; i <= n; i++)
    {
        c = 'A' + i - 1;
        k = n - 1;
        for(int j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c += k;
            k--;
        }

        printf("\n");
    }

    return 0;
}
