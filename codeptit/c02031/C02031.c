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
    for(int i = n - 1; i >= 1; i--)
    {
        c = 'A' + i - 1;
        for(int j = 1; j <= i + 1; j++)
        {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    printf("@");
    return 0;
}
