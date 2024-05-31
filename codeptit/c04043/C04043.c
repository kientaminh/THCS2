#include <stdio.h>
#include <stdbool.h>

long long comp(void *a, void *b)
{
    return *(long long *)a > *(long long *)b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long a[n + 1];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            a[i] *= a[i];
        }
        qsort(a, n, sizeof(long long), comp);
        bool kt = 0;
        for(int i = n - 1; i >= 2; i--)
        {
            int l = 0, r = i - 1;
            if(kt == 1) break;
            while(l < r)
            {
                if(a[l] + a[r] == a[i])
                {
                    kt = 1;
                    break;
                }
                else if(a[l] + a[r] > a[i]) r--;
                else l++;
            }
        }
        if(kt == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
