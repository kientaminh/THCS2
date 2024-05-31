#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
            if(a[j] > a[i])
                Swap(&a[j], &a[i]);
    }
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
