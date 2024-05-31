#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        int mn = n % 10, k = 1;
        while(n > 0)
        {
            if(n % 10 <= mn) mn = n % 10;
            else {
                k = 0;
                break;
            }
            n /= 10;
        }
        if(k == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
