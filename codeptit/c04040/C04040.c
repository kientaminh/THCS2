#include <stdio.h>
#include <stdlib.h>

long long max(long long a, long long b)
{
    if(a > b) return a;
    return b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long a[n];
        long long s = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            if(s + a[i] < 0)
                s = 0;
            else s += a[i];
            mx = max(s, mx);
        }
        printf("%lld\n", mx);
    }

    return 0;
}
