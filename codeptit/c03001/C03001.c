#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int s = 0;
        while(n > 0)
        {
            s += n % 10;
            n /= 10;
        }
        if(s % 10 == 0)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
