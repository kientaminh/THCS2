#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    for(int i = 0; i < n; i++)
    {
        if(i < t)
            printf("%d ", a[i + (n - t)]);
        else printf("%d ", a[i - t]);
    }
    return 0;
}
