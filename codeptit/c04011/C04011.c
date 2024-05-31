#include <stdio.h>
#include <stdbool.h>

bool solve(int a[], int i)
{
    for(int j = 0; j < i; j++)
        if(a[j] > a[i])
            return false;
    return true;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a[51];
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int d = 1;
        for(int i = 1; i < n; i++)
            if(solve(a, i))
                d++;
        printf("%d\n", d);
    }
    return 0;
}
