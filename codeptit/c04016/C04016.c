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
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[N] = {0};
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(!check[a[i]])
                b[a[i]]++;
        }
        printf("Test %d:\n", t);
        for(int i = 2; i <= 997; i++)
            if(b[i] > 0)
                printf("%d xuat hien %d lan\n", i, b[i]);
    }
    return 0;
}
