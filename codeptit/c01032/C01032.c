#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, tich = 1;
        scanf("%d", &n);
        int i = 2;
        while(n > 1)
        {
            if(n % i == 0)
            {
                tich *= i;
                while(n % i == 0) n /= i;
            }
            else i++;
        }
        printf("%d\n", tich);
    }
    return 0;
}
