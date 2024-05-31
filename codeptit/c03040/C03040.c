#include <stdio.h>
#include <stdlib.h>

int cs(int n)
{
    int s = 0;
    while(n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 2, sum = 0, sum_cs = cs(n);
    while(n > 1)
    {
        if(n % i == 0)
        {
            sum += cs(i);
            n /= i;
        }
        else i++;
    }
    if(sum == sum_cs)
        printf("YES");
    else printf("NO");
    return 0;
}
