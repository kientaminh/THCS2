#include <stdio.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void qsort(int a[], int l, int r)
{
    int left = l, right = r;
    int x = a[l + (r - l) / 2];
    while(left <= right)
    {
        while(x > a[left]) left++;
        while(x < a[right]) right--;
        if(left <= right)
        {
            Swap(a[left], a[right]);
            left++;
            right--;
        }

    }
    if(l < right) qsort(a, l, right);
    if(left < r) qsort(a, left, r);
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
            if(a[j] < a[i])
                Swap(&a[j], &a[i]);
    }
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
