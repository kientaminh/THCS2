#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, d = 0;
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
    {
        int x = i, s = 0;
        bool kt9 = 1;
        while(x > 0)
        {
            if(x % 10 == 9)
            {
                kt9 = 0;
                break;
            }
            s = s * 10 + x % 10;
            x /= 10;
        }
        if(kt9 == 1 && s == i)
        {
            printf("%d ", i);
            d++;
        }
    }
    printf("\n%d", d);
    return 0;
}
