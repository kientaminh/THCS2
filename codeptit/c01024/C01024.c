#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int cuoi = n % 10;
        while(n > 9) n /= 10;
        if(n == cuoi) printf("YES\n", n);
        else printf("NO\n");
    }
    return 0;
}
