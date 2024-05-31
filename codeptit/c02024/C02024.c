#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = 1; i <= a; i++)
    {
        int d = 0;
        char c = 'A' + i - 1;
        if(i > b)
        {
            c = 'A' + b - 1;
            for(int j = 1; j <= b; j++)
                printf("%c", c--);
        }
        else
        {
            for(int j = i; j <= b; j++)
                printf("%c", c++);
            c = 'A' + i - 2;
            for(int j = 1; j < i; j++)
                printf("%c", c--);
        }
        printf("\n");
    }

    return 0;
}
