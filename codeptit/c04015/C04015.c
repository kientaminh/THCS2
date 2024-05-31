#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[100001] = {0};
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        printf("Test %d:\n", k);
        for(int i = 0; i < n; i++)
        {
            if(b[a[i]] > 0)
            {
                printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
                b[a[i]] = 0;
            }
        }

    }

    return 0;
}
