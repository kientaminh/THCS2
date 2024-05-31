#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n, l = -1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < n - i + 1; j++)
            printf("~");
        for(int j = 1; j <= l; j += 2)
            printf("%d", j);
        l += 2;
        for(int j = l; j >= 1; j -= 2)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
