#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    char c = 'a';
    for(int i = 1; i <= n; i++)
    {
        if(i & 1)
        {
            for(int j = 1; j <= i; j++)
                printf("%c ", c++);
        }
        else
        {
            c += i - 1;
            for(int j = 1; j <= i; j++)
                printf("%c ", c--);
            c += i + 1;
        }
        printf("\n");
    }

    return 0;
}
