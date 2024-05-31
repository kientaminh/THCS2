#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        for(int i = 0; i < 10; i++)
        {
            count += n / a[i];
            n = n % a[i];
        }
        printf("%d\n", count);
    }
    return 0;
}
