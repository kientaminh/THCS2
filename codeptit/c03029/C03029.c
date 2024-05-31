#include <stdio.h>
#include <stdbool.h>

bool check(long long n)
{
    if(n % 2 != 0) return false;
    while(n > 0)
    {
        if(n % 10 % 2 != 0) return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
