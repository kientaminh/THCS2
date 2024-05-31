#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check[100001];
void sang()
{
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= 100001; i++)
        if(!check[i])
            for(int j = i * i; j <= 100001; j += i)
                if(!check[j])
                    check[j] = 1;
}

int main()
{
    sang();
    int n, d = 0;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        if(!check[i])
        {
            int x = i, s = 0;
            while(x > 0)
            {
                s += x % 10;
                x /= 10;
            }
            if(s % 5 == 0)
            {
                printf("%d ", i);
                d++;
            }
        }
    }
    printf("\n%d", d);
    return 0;
}
