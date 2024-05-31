#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool solve(int a[], int i, int n)
{
    for(int j = i + 1; j < n; j++)
        if(a[j] >= a[i])
            return false;
    return true;
}

int comp(void *a, void *b)
{
    return *(int*)a < *(int*)b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a[1001], b[1001];
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int d = 0;
        for(int i = 0; i < n; i++)
            if(solve(a, i, n))
            {
                b[d] = a[i];
                d++;
            }
        qsort(&b, d, sizeof(int), comp);
        for(int i = 0; i < d; i++)
            printf("%d ", b[i]);
        printf("\n");
    }
    return 0;
}
