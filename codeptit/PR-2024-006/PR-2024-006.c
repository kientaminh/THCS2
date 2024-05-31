#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//void sx_t(int *a[], int *n)
//{
//    for(int i = 0; i < *n; i++)
//    {
//        for(int j = i + 1; j < *n; j++)
//            if(*a[j] < *a[i])
//                Swap(&a[i], &a[j]);
//    }
//    for(int i = 0; i < *n; i++)
//        printf("%d ", *a[i]);
//}

//void sx_g(int *a[], int n)
//{
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = i + 1; j < n; j++)
//            if(*a[j] > *a[i])
//                Swap(&(*a[i]), &(*a[j]));
//    }
//    for(int i = 0; i < n; i++)
//        printf("%d ", *a[i]);
//}

int main()
{
    //FILE *fi = fopen("input.in", "r");
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m, n;
        char c;
        scanf("%d %d %c", &m, &n, &c);
        int a[m+1], b[n+1];
        for(int i = 0; i < m; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < n; i++)
            scanf("%d", &b[i]);
        if(c == 'F')
        {
            for(int i = 0; i < m; i++)
                printf("%d ", a[i]);
            for(int i = 0; i < n; i++)
                printf("%d ", b[i]);
        }
        else if(c == 'A')
        {
            for(int i = 0; i < n; i++)
                printf("%d ", b[i]);
            for(int i = 0; i < m; i++)
                printf("%d ", a[i]);
        }
        else if(c == 'T')
        {
            int arr[m + n + 1];
            for(int i = 0; i < n + m; i++)
            {
                if(i < m) arr[i] = a[i];
                else arr[i] = b[i-m];
            }
            for(int i = 0; i < n + m; i++)
            {
                for(int j = i + 1; j < n + m; j++)
                    if(arr[j] < arr[i])
                        Swap(&arr[i], &arr[j]);
            }
                for(int i = 0; i < n + m; i++)
                    printf("%d ", arr[i]);

        }
        else if(c == 'G')
        {
            int arr[m + n + 1];
            for(int i = 0; i < n + m; i++)
            {
                if(i < m) arr[i] = a[i];
                else arr[i] = b[i-m];
            }
            for(int i = 0; i < n + m; i++)
            {
                for(int j = i + 1; j < n + m; j++)
                    if(arr[j] > arr[i])
                        Swap(&arr[i], &arr[j]);
            }
                for(int i = 0; i < n + m; i++)
                    printf("%d ", arr[i]);
        }
        printf("\n");
    }

    //fclose(fi);
    return 0;
}
