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
        for(int k = 1; k < i; k++)
            printf("~");
        for(int j = 1; j <= b; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
