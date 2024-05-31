#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("@");
    for(int i = 1; i < b; i++)
        printf("%c", 'A' + i - 1);
    printf("\n");
    for(int i = 1; i < a; i++)
    {
        char c;
        if(i >= b - 1)
        {
            c = 'A' + b - 2;
            for(int j = 1; j <= b; j++)
                printf("%c", c);
        }
        else
        {
            c = 'A' + i - 1;
            for(int j = i; j < b; j++)
                printf("%c", c++);
            for(int j = 1; j <= i; j++)
                printf("%c", c - 1);
        }
        printf("\n");
    }

    return 0;
}
