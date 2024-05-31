#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check(int n)
{
    int cuoi = n % 10;
    n /= 10;
    while(n > 0)
    {
        if(n % 10 > cuoi) return false;
        cuoi = n % 10;
        n /= 10;
    }
    return true;
}

void solve()
{
    int a;
    scanf("%d", &a);
    int l = pow(10, a-1), r = pow(10, a);
    for(int i = l; i < r; i++)
        if(check(i)) printf("%d ", i);
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();
    return 0;
}
