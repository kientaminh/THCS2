#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool snt(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return n > 1;
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", t);
        int i = 2, d = 0;
        while(n > 1)
        {
            if(n % i == 0)
            {
                d++;
                n /= i;
            }
            else
            {
                if(snt(i) && d != 0)
                    printf("%d(%d) ", i, d);
                i++;
                d = 0;
            }
            if(n == 1)
                printf("%d(%d) ", i, d);
        }
        printf("\n");
    }

    return 0;
}
