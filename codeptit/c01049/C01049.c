#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int t;
    scanf("%d", &t);
    while(t--)
    {
        unsigned int n, le = 0, chan = 0;
        scanf("%u", &n);
        if(n == 0) printf("0\n");
        while(n > 0)
        {
            if(n % 2 == 0) chan++;
            else le++;
            n /= 10;
        }
        printf("%u %u\n", le, chan);
    }
    return 0;
}
