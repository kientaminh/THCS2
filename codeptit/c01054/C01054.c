#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 2000001

int check[N] = {0};
void sang()
{
    for(int i = 2; i * i <= N; i++)
        if(check[i] == 0)
            for(int j = i * i; j <= N; j += i)
                if(check[j] == 0)
                    check[j] = i;
    for(int i = 2; i <= N; i++)
        if(check[i] == 0)
            check[i] = i;
}

int main()
{
    int n;
    long long s = 0;
    scanf("%d", &n);
    sang();
    while(n--)
    {
        int t;
        scanf("%d", &t);
        int sum = 0;
        while(t > 1)
        {
            sum += check[t];
            t /= check[t];
        }
        s += sum;
    }
    printf("%lld", s);
    return 0;
}
