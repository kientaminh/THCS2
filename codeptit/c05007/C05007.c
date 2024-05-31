#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m], x, y;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d%d", &x, &y);
    for(int i = 0; i < n; i++)
        Swap(&a[i][x - 1], &a[i][y - 1]);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
