#include <stdio.h>
#include <stdbool.h>

bool snt(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int s = 0;
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(snt(a[i][j]))
                s += a[i][j];
    printf("%d", s);


    return 0;
}
