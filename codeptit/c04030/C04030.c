#include <stdio.h>
#include <stdlib.h>

int comp1(void *a, void *b)
{
    return *(int*)a > *(int*)b;
}

int comp2(void *a, void *b)
{
    return *(int*)a < *(int*)b;
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < n; i++)
            scanf("%d", &b[i]);
        qsort(&a, n, sizeof(int), comp1);
        qsort(&b, n, sizeof(int), comp2);
        printf("Test %d:\n", t);
        for(int i = 0; i < n ; i++)
            printf("%d %d ", a[i], b[i]);
        printf("\n");
    }
    return 0;
}
