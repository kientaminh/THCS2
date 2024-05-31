#include <stdio.h>
#include <math.h>

int ktra(int n)
{
    if(n == 1) return 0;
    if(n <= 3) return 1;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}

int main()
{
    short int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        if(ktra(n)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
