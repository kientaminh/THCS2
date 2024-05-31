#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = n;
    int d[n + 1];
    for(int i = 1; i <= n; i++)
        d[i] = 0;
    while(n - 1 > 0)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        d[a]++;
        d[b]++;
        n--;
    }
    for(int i = 1; i <= x; i++)
    {
        if(d[i] == x - 1)
        {
            printf("Yes");
            return 0;
        }

    }
    printf("No");
    return 0;
}
