#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int f[11];

void fib()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 10; i++)
        f[i] = f[i - 1] + f[i - 2];
}

bool snt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    fib();
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b)
        Swap(&a, &b);
    for(int i = a; i <= b; i++)
    {
        if(snt(i))
        {
            int s = 0, x = i;
            while(x > 0)
            {
                s += x % 10;
                x /= 10;
            }
            for(int j = 0; j < 10; j++)
            {
                if(f[j] == s)
                {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }

    return 0;
}
