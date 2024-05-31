#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n + 2][n + 2];
        int d = 1, k = n * n, hang = n, cot = n;
        while(d <= n / 2 + 1)
        {
            for(int i = d; i <= cot; i++)
                a[d][i] = k--;
            for(int i = d + 1; i <= hang; i++)
                a[i][cot] = k--;
            for(int i = cot - 1; i >= d; i--)
                a[hang][i] = k--;
            for(int i = hang - 1; i > d; i--)
                a[i][d] = k--;
            d++;
            cot--;
            hang--;
        }
        printf("Test %d:\n", t);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }

    return 0;
}
