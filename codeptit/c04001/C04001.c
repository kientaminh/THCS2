#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
