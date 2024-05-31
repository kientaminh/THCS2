#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = n, cuoi = n % 10, dem = 0, dau;
    while(a > 0)
    {
        if(a < 10) dau = a;
        a /= 10;
        dem++;
    }
    printf("%d", cuoi * (int)pow(10, dem-1) + (n - dau * (int)pow(10, dem-1) - cuoi) + dau);
    return 0;
}
