#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int i = 2;
        while(n > 1)
        {
            if(n % i == 0)
            {
                printf("%d ", i);
                n /= i;
            }
            else i++;
        }
        printf("\n");
    }
    return 0;
}
