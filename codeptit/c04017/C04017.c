#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 100001

bool check[N];

void sang()
{
    check[0] = check[1] = true;
    for(int i = 2; i * i <= N; i++)
    {
        if(!check[i])
        {
            for(int j = i * i; j <= N; j += i)
                if(!check[j])
                    check[j] = true;
        }
    }
}

int main()
{
    sang();
    int n;
    scanf("%d", &n);
    int a[n], d = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(!check[a[i]]) d++;
    }
    printf("%d ", d);
    for(int i = 0; i < n; i++)
        if(!check[a[i]])
            printf("%d ", a[i]);
    return 0;
}
