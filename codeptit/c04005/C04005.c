#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a[100], mx = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(mx < a[i])
                mx = a[i];
        }
        printf("%d\n", mx);
        for(int i = 0; i < n; i++)
        {
            if(mx == a[i])
                printf("%d ", i);
        }
        printf("\n");

    }
    return 0;
}
