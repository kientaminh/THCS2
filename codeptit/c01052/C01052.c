#include <stdio.h>
#include <math.h>



int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, d = 0;
        scanf("%d", &n);
        for(int i = 1; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(i % 2 == 0) d++;
                if(n/i % 2 == 0 && n/i != i) d++;
            }
        }
        printf("%d\n", d);
    }
    return 0;
}
