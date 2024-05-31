#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    float x;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        x += a[i];
    }
    printf("%.3f", x / n);
    return 0;
}
