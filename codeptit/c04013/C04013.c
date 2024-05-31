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
    int d = 0;
    for(int i = 0; i < n; i++)
        if(b[a[i]] == 1)
            d++;
    printf("%d\n", d);
    for(int i = 0; i < n; i++)
        if(b[a[i]] == 1)
            printf("%d ", a[i]);
    return 0;
}
