#include <stdio.h>
#include <stdbool.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void qsort(int *a, int l, int r)
{
    int left = l, right = r;
    int x = a[l + (r - l) / 2];
    while(left <= right)
    {
        while(x > a[left]) left++;
        while(x < a[right]) right--;
        if(left <= right)
        {
            Swap(&a[left], &a[right]);
            left++;
            right--;
        }

    }
    if(l < right) qsort(a, l, right);
    if(left < r) qsort(a, left, r);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, mn, d = 0;
        scanf("%d", &n);
        int a[n + 1];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qsort(a, 0, n - 1);
        mn = a[1] - a[0];
        for(int i = 2; i < n; i++)
            if(a[i] - a[i - 1] < mn)
                mn = a[i] - a[i - 1];
        for(int i = 1; i < n; i++)
            if(mn == a[i] - a[i - 1])
                d++;
        printf("%d %d\n", mn, d);
    }

    return 0;
}
