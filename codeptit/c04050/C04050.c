#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    int n, m, a[100], b[100], d[1001] = {0};
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        d[a[i]] = 1;
    }
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        if(d[b[i]] == 1) d[b[i]] = 2;
        else if(d[b[i]] != 2) d[b[i]] = 3;
    }
    for(int i = 1; i < 1000; i++)
        if(d[i] == 2)
            printf("%d ", i);
    printf("\n");
    for(int i = 1; i < 1000; i++)
        if(d[i] == 1)
            printf("%d ", i);
    printf("\n");
    for(int i = 1; i < 1000; i++)
        if(d[i] == 3)
            printf("%d ", i);
    return 0;
}
