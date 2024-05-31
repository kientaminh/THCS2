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
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
            if(a[j] > a[i])
                Swap(&a[j], &a[i]);
        printf("Buoc %d: ", i);
        for(int j = 0; j <= i; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
    return 0;
}
