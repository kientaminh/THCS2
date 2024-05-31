#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d = 0;
    scanf("%d", &n);
    char a[11][11];
    for(int i = 0; i < n; i++)
        scanf("%s", a[i]);
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = n - 1; j >= 0; j--)
        {
            if(a[i][j] == '1')
            {
                for(int k = 0; k <= i; k++)
                    for(int l = 0; l <= j; l++)
                        a[k][l] = '1' - a[k][l] + 48;
                d++;
            }
        }
    }
    printf("%d", d);
    return 0;
}
