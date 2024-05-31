#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int t[n], d[n];
    for(int i = 0; i < n; i++)
        scanf("%d%d", &t[i], &d[i]);
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(t[j] < t[i])
            {
                Swap(&t[i], &t[j]);
                Swap(&d[i], &d[j]);
            }
        }
    }
    int s = t[0] + d[0];
    for(int i = 1; i < n; i++)
    {
        if(s < t[i])
            s = t[i] + d[i];
        else s += d[i];
    }
    printf("%d", s);
    return 0;
}
