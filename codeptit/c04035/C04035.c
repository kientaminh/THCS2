#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int t, s1 = 0, s2 = 0, mn1 = 50000, mn2 = 50000;
    scanf("%d", &t);
    while(t--)
    {
        int u, d;
        scanf("%d%d", &u, &d);
        s1 += u;
        s2 += d;
        mn1 = min(mn1, u);
        mn2 = min(mn2, d);
    }
    s1 += mn2;
    s2 += mn1;
    if(s1 > s2)
        printf("%d", s1);
    else printf("%d", s2);
    return 0;
}
