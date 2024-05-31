#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a[101], b[30001] = {0};
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        int mx = 0;
        for(int i = 0; i < n; i++)
            if(mx < b[a[i]]) mx = b[a[i]];
        for(int i = 0; i < n; i++)
        {
            if(mx == b[a[i]])
            {
                printf("%d ", a[i]);
                b[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
