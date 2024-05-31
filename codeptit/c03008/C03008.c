#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
bool pf_num(int n)
{
    int s = 1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            s += i;
            if(i != n / i)
                s += n / i;
        }
    }
    if(s == n) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 6; i <= n; i++)
        if(pf_num(i))
            printf("%d ", i);

    return 0;
}
