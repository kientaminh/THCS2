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
        int j, d = 1;
        if(a > b)
            j = a - i + 1;
        else j = b - i + 1;
        for(; j >= 1 && d <= b; j--)
        {
            printf("%d", j);
            d++;
        }
        j += 2;
        for(; j <= b && d <= b; j++)
        {
            printf("%d", j);
            d++;
        }
        printf("\n");
    }

    return 0;
}
