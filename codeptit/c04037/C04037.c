#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[100001] = {0}, c[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    int d = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[a[i]] > 1)
        {
            c[d] = a[i];
            d++;
            b[a[i]] = 0;
        }
    }
    printf("%d\n", d);
    for(int i = 0; i < d; i++)
        printf("%d ", c[i]);

    return 0;
}
