#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
long long f[100];

void fib()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 100; i++)
        f[i] = f[i - 1] + f[i - 2];
}

int main()
{
    fib();
    int n;
    scanf("%d", &n);
    bool kt = false;
    for(int i = 0; i <= 100; i++)
        if(f[i] == n)
        {
            printf("1");
            kt = true;
        }
    if(kt == false) printf("0");
    return 0;
}
