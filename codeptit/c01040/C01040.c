#include <stdio.h>
#include <stdlib.h>

int perfect(int n)
{
    int s = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0) s += i;
        if(n / i != n && n % (n / i) == 0 && n/i != i) s += n/i;
    }
    if(s == n) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(perfect(n)) printf("1");
    else printf("0");
    return 0;
}
