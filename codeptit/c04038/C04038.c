#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n - 1; i++)
    {
        int mn = i;
        for(int j = i + 1; j < n; j++)
            if(a[j] < a[mn])
                mn = j;
        Swap(&a[mn], &a[i]);
        for(int j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
    return 0;
}
