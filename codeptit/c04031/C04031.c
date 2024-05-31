#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    if(a > b) return a;
    return b;
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n, a[101], l[101];
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int mx = 1;
        l[0] = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] > a[i - 1])
                l[i] = l[i - 1] + 1;
            else l[i] = 1;
            mx = max(mx, l[i]);
        }
        printf("Test %d:\n%d\n", t, mx);
        for(int i = 0; i < n; i++)
        {
            if(l[i] == mx)
            {
                for(int j = i - mx + 1; j <= i; j++)
                    printf("%d ", a[j]);
                printf("\n");
            }
        }
    }
    return 0;
}
