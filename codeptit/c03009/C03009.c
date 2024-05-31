#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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
    if(s == n && n != 1) return 1;
    return 0;
}


int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(a > b)
    {
        for(int i = b; i <= a; i++)
            if(pf_num(i))
                printf("%d ",i);
    }
    else {

        for(int i = a; i <= b; i++)
            if(pf_num(i))
                printf("%d ", i);
    }

    return 0;
}
