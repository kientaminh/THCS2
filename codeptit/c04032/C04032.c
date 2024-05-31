#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(b[i] < b[j])
            {
                Swap(&a[i], &a[j]);
                Swap(&b[i], &b[j]);
            }

        }

    }

}

int tim(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            return i;
    return n;
}

bool SoKhongGiam(int n)
{
    while(n > 9)
    {
        int c = n % 10;
        n /= 10;
        if(n % 10 > c) return false;
    }
    return true;
}

int b[100001];
int main()
{
    //FILE *fi = fopen("input.in", "r");
    int x, a[100001], size = 0;
    while(scanf("%d", &x) != -1)
    {
        if(SoKhongGiam(x))
        {
            int vt = tim(a, size, x);
            if(vt != size)
                b[vt]++;
            else
            {
                a[size++] = x; //co the dung struct
                b[vt]++;
            }
        }
    }
    sort(a, b, size);
    for(int i = 0; i < size; i++)
        printf("%d %d\n", a[i], b[i]);
    //fclose(fi);
    return 0;
}
