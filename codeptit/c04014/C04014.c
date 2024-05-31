#include <stdio.h>
#include <stdlib.h>

#define N 10000001

int b[N];

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(b[a[i]] > 0)
        {
            printf("%d %d\n", a[i], b[a[i]]);
            b[a[i]] = 0;
        }
    }


    return 0;
}
