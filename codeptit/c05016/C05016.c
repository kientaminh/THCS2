#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1][n + 1];
    int d = 1, hang = n, cot = n, k = 1;
    while(d <= n / 2 + 1)
    {
        for(int i = d; i <= cot; i++)
            a[d][i] = k++;
        for(int i = d + 1; i <= hang; i++)
            a[i][cot] = k++;
        for(int i = cot - 1; i >= d; i--)
            a[hang][i] = k++;
        for(int i = hang - 1; i > d; i--)
            a[i][d] = k++;
        d++;
        hang--;
        cot--;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
