#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 2;
    scanf("%d", &n);
    while(n > 1)
    {
        if(n % i != 0) i++;
        else
        {
            if(n == i)
            {
                n /= i;
                printf("%d", i);
            }
            else
            {
                n /= i;
                printf("%dx", i);
            }
        }
    }
    return 0;
}
