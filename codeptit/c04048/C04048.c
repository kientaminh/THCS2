#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool p[1001];
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 1; i <= m; i++)
    {
        int x;
        scanf("%d", &x);
        int l = x - k, r = x + k;
        if(l < 1) l = 1;
        if(r > n) r = n;
        for(int j = l; j <= r; j++)
            p[j] = 1;
    }
    int mn = 0;
    for(int i = 1; i <= n; i++)
    {
        int count = 0;
        while(p[i] == 0 && i <= n)
        {
            count++;
            i++;
        }
        mn += count / (2 * k + 1);
        if(count % (2 * k + 1) != 0)
            mn += 1;
        if(count != 0)
            i--;
    }
    printf("%d", mn);

    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int n, m, k;
//    scanf("%d%d%d", &n, &m, &k);
//    int a[m + 1];
//    for(int i = 1; i <= m; i++)
//        scanf("%d", &a[i]);
//    int d = 0, dau = a[1];
//    while(dau - k > 1)
//    {
//        d++;
//        dau -= 2 * k + 1;
//    }
//    for(int i = 1; i < m; i++)
//    {
//        while(a[i] + k < a[i + 1] - k)
//        {
//            d++;
//            a[i] += 2 * k + 1;
//        }
//    }
//    while(a[m] + k < n)
//    {
//        d++;
//        a[m] += 2 * k + 1;
//    }
//    printf("%d", d);
//    return 0;
//}
