#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if(a > b)
        return b;
    return a;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    char c;
    for(int i = a; i >= 1; i--)
    {
        if(i >= b)
            c = 'A' + b - 1;
        else c = 'A' + i - 1;
        for(int j = 1; j <= b; j++)
        {
            printf("%c", c);
            if(j < b - i + 1) c++;
        }
        printf("\n");
    }
    return 0;
}
