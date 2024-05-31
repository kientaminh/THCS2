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
    printf("@\n");
    for(int i = 1; i < n; i++)
    {
        c = 'B';
        printf("@");
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j < i)
            {
                printf("%c", c);
                c += 2;
            }
            else if(j == i)
            {
                printf("%c", c);
                c -= 2;
            }
            else
            {
                printf("%c", c);
                c -= 2;
            }
        }
        printf("@\n");
    }

    return 0;
}
