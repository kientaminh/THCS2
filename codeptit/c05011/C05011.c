#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                scanf("%d", &a[i][j]);
        printf("Test %d:\n", t);
        for(int i1 = 0; i1 < n; i1++)
        {
            for(int i2 = 0; i2 < n; i2++)
            {
                int tong = 0;
                for(int j = 0; j < m; j++)
                    tong += a[i1][j] * a[i2][j];
                printf("%d ", tong);
            }
            printf("\n");
        }
    }
    return 0;
}
