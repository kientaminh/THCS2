#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, a[101], buoc = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
    {
        bool k = false;
        for(int j = 0; j < n - 1; j++)
            if(a[j] > a[j + 1])
            {
                k = true;
                Swap(&a[j], &a[j + 1]);
            }
        if(k == true)
        {
            printf("Buoc %d: ", buoc);
            buoc++;
            for(int j = 0; j < n; j++)
                printf("%d ", a[j]);
            printf("\n");
        }
    }
    return 0;
}
