#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
            printf("~");
        for(int j = 2; j <= c; j += 2)
            printf("%d", j);
        c += 2;
        for(int j = c; j >= 2; j -= 2)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
