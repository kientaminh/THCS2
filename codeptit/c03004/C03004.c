#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

long long gcd(long long a, long long b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n%lld", gcd(a, b), lcm(a, b));

    return 0;
}
