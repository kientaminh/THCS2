#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n--) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(c - a == d - b) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
