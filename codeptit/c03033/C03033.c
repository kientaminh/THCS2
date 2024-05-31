#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d = ", n);
        int i = 2, d = 0;
        while(n > 1)
        {
            if(n % i == 0)
            {
                n /= i;
                d++;
            }
            else
            {
                if(d != 0)
                    printf("%d^%d * ", i, d);
                i++;
                d = 0;
            }
        }
        if(d != 0)
            printf("%d^%d", i, d);
        printf("\n");
    }
    return 0;
}
