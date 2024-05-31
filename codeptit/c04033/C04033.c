#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[100001] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(b[a[i]] > 0)
        {
            printf("%d ", a[i]);
            b[a[i]] = 0;
        }
    }


    return 0;
}
