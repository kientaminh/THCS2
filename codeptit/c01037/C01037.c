#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld", (abs(a-b) + 1) * (a + b) / 2);
    return 0;
}
