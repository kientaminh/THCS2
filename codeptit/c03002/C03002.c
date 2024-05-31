#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define N 1000001

bool check[N];

void sang()
{
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= N; i++)
        if(!check[i])
            for(int j = i * i; j <= N; j += i)
                if(!check[j])
                    check[j] = 1;
}

int main()
{
    sang();
    int n;
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
        if(!check[i])
            printf("%d\n", i);

    return 0;
}
