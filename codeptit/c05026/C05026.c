#include <stdio.h>
#include <stdbool.h>

#define N 10000001

bool check[N];

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
    int n;
    scanf("%d", &n);
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    int mx = 0, vt = 1;
    for(int i = n; i >= 1; i--)
    {
        int d = 0;
        for(int j = 1; j <= n; j++)
            if(!check[a[i][j]])
                d++;
        if(mx <= d)
        {
            mx = d;
            vt = i;
        }
    }
    printf("%d\n", vt);
    for(int j = 1; j <= n; j++)
        if(!check[a[vt][j]])
            printf("%d ", a[vt][j]);

    return 0;
}
