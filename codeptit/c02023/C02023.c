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
        char c;
        if(b > a)
            c = b + 'a';
        else c = a + 'a';
        for(int j = 1; j <= b; j++)
        {
            if(j <= i) c--;
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}
