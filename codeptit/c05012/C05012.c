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
        int a[21][21] = {0}, b[21][21] = {0}, res[21][21] = {0}, k = 1;
        a[1][0] = 0;
        //tao mang a
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= k; j++)
                a[i][j] = a[i][j - 1] + 1;
            k++;
        }
        //mang chuyen vi
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                b[i][j] = a[j][i];
        //tich
        printf("Test %d:\n", t);
        for(int i = 1; i <= n; i++)
        {
            for(k = 1; k <= n; k++)
            {
                for(int j = 1; j <= n; j++)
                    res[i][k] += (a[i][j] * b[j][k]);
                printf("%d ", res[i][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
