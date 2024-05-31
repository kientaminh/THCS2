#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

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
        for(int i1 = 0; i1 < n; i1++)
            for(int j1 = 0; j1 < m; j1++)
                for(int i2 = i1; i2 < n; i2++)
                    for(int j2 = j1; j2 < m; j2++)
                        if(a[i1][j1] > a[i2][j2])
                            Swap(&a[i1][j1], &a[i2][j2]);
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }


    return 0;
}
