#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

struct ps
{
    int tu;
    int mau;
};

int gcd(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void rutgon(int *tu, int *mau)
{
    int uoc = gcd(*tu, *mau);
    *tu /= uoc;
    *mau /= uoc;
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
    {
        struct ps p, q;
        scanf("%d%d%d%d", &p.tu, &p.mau, &q.tu, &q.mau);
        rutgon(&p.tu, &p.mau);
        rutgon(&q.tu, &q.mau);
        printf("Case #%d:\n", t);
        if(q.mau % p.mau == 0)
        {
            int tu_moi = p.tu * (q.mau / p.mau);
            printf("%d/%d %d/%d\n", tu_moi, q.mau, q.tu, q.mau);
            printf("%d/%d\n", tu_moi + q.tu, q.mau);
            rutgon(&tu_moi, &q.tu);
            printf("%d/%d\n", tu_moi, q.tu);
        }
        else if(p.mau % q.mau == 0)
        {
            int tu_moi = q.tu * (p.mau / q.mau);
            printf("%d/%d %d/%d\n", p.tu, p.mau, tu_moi, p.mau);
            printf("%d/%d\n", tu_moi + p.tu, p.mau);
            rutgon(&p.tu, &tu_moi);
            printf("%d/%d\n", p.tu, tu_moi);
        }
        else
        {
            int x = p.tu * q.mau, y = q.tu * p.mau;
            printf("%d/%d %d/%d\n", x, p.mau * q.mau, y, q.mau * p.mau);
            printf("%d/%d\n", x + y, p.mau * q.mau);
            rutgon(&x, &y);
            printf("%d/%d\n", x, y);
        }
    }
    return 0;
}
