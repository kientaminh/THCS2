#include <stdio.h>
#include <stdlib.h>

int comp(void *a, void *b)
{
    return *(int*)a > *(int*)b;
}

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(&a, n, sizeof(int), comp);
    for(int i = 0; i < n; i++)
        if(!(a[i] & 1))
            printf("%d ", a[i]);
    for(int i = 0; i < n; i++)
        if(a[i] & 1)
            printf("%d ", a[i]);

    return 0;
}
