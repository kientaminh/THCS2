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
            int a[n+1][m+1], mx = 0, h = 0, c = 0;
            for(int i = 0; i < n; i++)
            {
                int s = 0;
                for(int j = 0; j < m; j++)
                {
                    scanf("%d", &a[i][j]);
                    s += a[i][j];
                }
                if(mx < s)
                {
                    mx = s;
                    h = i;
                }
            }
            mx = 0;
            for(int i = 0; i < m; i++)
            {
                int s = 0;
                for(int j = 0; j < n; j++)
                    if(j != h)
                        s += a[j][i];
                if(mx < s)
                {
                    mx = s;
                    c = i;
                }
            }
            printf("Test %d:\n", t);
            for(int i = 0; i < n; i++)
            {
                if(i != h)
                {
                    for(int j = 0; j < m; j++)
                    {
                        if(j != c)
                            printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
            }
    }



    return 0;
}
