#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool snt(int n)
{
    if(n <= 1) return false;
    if(n <= 3) return true;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
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
        {
            scanf("%d", &a[i]);
            if(snt(a[i]))
                printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
