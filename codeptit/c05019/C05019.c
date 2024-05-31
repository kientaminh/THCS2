#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10000001

bool check[N];
int b[N];

void sang()
{
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= N; i++)
        if(!check[i])
            for(int j = i * i; j <= N; j += i)
                if(!check[j])
                    check[j] = 1;
}

int main()
{
    sang();
    int T, size = 0;
    scanf("%d", &T);
    for(int i = 2; i <= N; i++)
        if(!check[i])
            b[size++] = i;
    for(int t = 1; t <= T; t++)
    {

        int n;
        scanf("%d", &n);
        int a[n + 1][n + 1];
        int d = 1, hang = n, cot = n, k = 0;
        while(d <= n / 2 + 1)
        {
            for(int i = d; i <= cot; i++)
                a[d][i] = b[k++];
            for(int i = d + 1; i <= hang; i++)
                a[i][cot] = b[k++];
            for(int i = cot - 1; i >= d; i--)
                a[hang][i] = b[k++];
            for(int i = hang - 1; i > d; i--)
                a[i][d] = b[k++];
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
