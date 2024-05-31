#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n + 1][m + 1];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                scanf("%d", &a[i][j]);
        int d1 = 1, d2 = 0, hang = n, cot = m;
        while(d1 <= n / 2 + 1)
        {
            for(int i = d1; i <= cot; i++)
            {
                printf("%d ", a[d1][i]);
                d2++;
            }
            if(d2 == n * m) break;
            for(int i = d1 + 1; i <= hang; i++)
            {
                printf("%d ", a[i][cot]);
                d2++;
            }
            if(d2 == n * m) break;
            for(int i = cot - 1; i >= d1; i--)
            {
                printf("%d ", a[hang][i]);
                d2++;
            }
            if(d2 == n * m) break;
            for(int i = hang - 1; i > d1; i--)
            {
                printf("%d ", a[i][d1]);
                d2++;
            }
            d1++;
            //d2++;
            hang--;
            cot--;
        }
        printf("\n");
    }

    return 0;
}
