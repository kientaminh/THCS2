#include <stdio.h>
#include <stdlib.h>


long long f[100];
long long fib(int n)
{
    f[1] = 1;
    for(int i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1][n + 1];
    int d = 1, cot = n, hang = n, k = 0;
    while(d <= n / 2 + 1)
    {
        for(int i = d; i <= cot; i++)
            a[d][i] = fib(k++);
        for(int i = d + 1; i <= hang; i++)
            a[i][cot] = fib(k++);
        for(int i = cot - 1; i >= d; i--)
            a[hang][i] = fib(k++);
        for(int i = hang - 1; i > d; i--)
            a[i][d] = fib(k++);
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
