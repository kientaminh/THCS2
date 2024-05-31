#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct pokemon
{
    char ten[100];
    int tienhoa;
};

int main()
{
    int n, mx = 0, tong = 0;
    scanf("%d", &n);
    struct pokemon x[100];
    for(int i = 0; i < n; i++)
    {
        int k, m;
        scanf("%s%d%d", x[i].ten, &k, &m);
        int cnt = 0;
        while(m / k)
        {
            int tmp = m / k;
            cnt += tmp;
            m -= tmp * k;
            m += 2 * tmp;
        }
        x[i].tienhoa = cnt;
        if(cnt > mx)
            mx = x[i].tienhoa;
        tong += cnt;
    }
    printf("%d\n", tong);
    for(int i = 0; i < n; i++)
    {
        if(x[i].tienhoa == mx)
        {
            printf("%s", x[i].ten);
            break;
        }
    }

    return 0;
}
