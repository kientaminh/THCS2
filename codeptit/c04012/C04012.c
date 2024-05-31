#include <stdio.h>
#include <stdbool.h>
#define N 10000001
int b[N];

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    bool kt = false;
    for(int i = 0; i < n; i++)
    {
        if(b[a[i]] > 1)
        {
            kt = true;
            printf("%d ", a[i]);
            b[a[i]] = 0;
        }

    }
    if(!kt) printf("0");
    return 0;
}
