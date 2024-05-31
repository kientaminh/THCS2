#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for(short int i = 1; i <= b; i++)
    {
        if(i == 1 || i == b)
        {
            for(int j = 1; j <= a; j++)
                printf("*");
        }
        else
        {
            for(int j = 1; j <= a; j++)
            {
                if(j == 1 || j == a) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
