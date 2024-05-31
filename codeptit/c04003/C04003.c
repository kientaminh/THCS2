#include <stdio.h>
#include <stdbool.h>

bool ktr(int a[], int n)
{
    for(int i = 0; i < n; i++)
        if(a[i] != a[n - i - 1])
            return false;
    return true;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a[100];
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        if(ktr(a, n))
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
