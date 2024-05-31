#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(!(a[i] & 1))
            printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++)
        if(a[i] & 1)
            printf("%d ", a[i]);
    return 0;
}
