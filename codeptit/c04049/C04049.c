#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, a[1001];
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        printf("%d ", a[0]);
        for(int i = 0; i < n - 1; i++)
            printf("%d ", lcm(a[i], a[i + 1]));
        printf("%d\n", a[n - 1]);
    }
    return 0;
}
