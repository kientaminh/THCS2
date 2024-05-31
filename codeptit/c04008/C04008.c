#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n, m, a[100], b[100], p;
        scanf("%d%d%d", &n, &m, &p);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < m; i++)
            scanf("%d", &b[i]);
        printf("Test %d:\n", k);
        for(int i = 0; i < n + m; i++)
        {
            if(i < p)
                printf("%d ", a[i]);
            else if(i >= p && i < m + p)// 1 2 3 4 5 6 7
                printf("%d ", b[i - p]);
            else printf("%d ", a[i - m]);
        }
        printf("\n");
    }
    return 0;
}
