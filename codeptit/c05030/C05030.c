#include <stdio.h>
#include <stdlib.h>

void solve()
{
    int n, m, h1[1001] = {0}, c1[1001] = {0}, h2[1001] = {0}, c2[1001] = {0};
    long long d = 0;
    scanf("%d%d", &n, &m);
    char a[1001][1001];
    for(int i = 0; i < n; i++)
    {
        scanf("\n");
        for(int j = 0; j < m; j++)
        {
            scanf("%c", &a[i][j]);
            if(a[i][j] == '1')
            {
                h1[i]++;
                c1[j]++;
            }
            else if(a[i][j] == '2')
            {
                h2[i]++;
                c2[j]++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '1')
                d += h2[i] * c2[j];
            else if(a[i][j] == '2')
                d += h1[i] * c1[j];
        }
    }
    printf("%lld\n", d);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
        solve();

    return 0;
}
