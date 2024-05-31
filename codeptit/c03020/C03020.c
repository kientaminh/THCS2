#include <stdio.h>
#include <stdbool.h>

bool sodep(long long n)
{
    long long d = 0, s = 0, a = n;
    bool kt6 = 0;
    while(n > 0)
    {
        int x = n % 10;
        if(x == 6)
            kt6 = 1;
        s += x;
        d = d * 10 + x;
        n /= 10;
    }
    if(kt6 == 1 && s % 10 == 8 && d == a)
        return 1;
    return 0;
}

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if(a > b)
        Swap(&a, &b);
    for(long long i = a; i <= b; i++)
        if(sodep(i))
            printf("%lld ", i);
    return 0;
}
