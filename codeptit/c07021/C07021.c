#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien
{
    int ma;
    char ten[100];
    float a, b, c, tong;
};


int main()
{
    struct sinhvien p[100];
    while(1)
    {
        int t, n, k;
        scanf("%d", &t);
        if(t == 1)
        {
            scanf("%d", &n);
            for(int i = 1; i <= n; i++)
            {
                scanf("\n");
                p[i].ma = i;
                gets(p[i].ten);
                scanf("%f %f %f", &p[i].a, &p[i].b, &p[i].c);
                p[i].tong = p[i].a + p[i].b + p[i].c;
            }
        }
        else if(t == 2)
        {
            scanf("%d\n", &k);
            gets(p[k].ten);
            scanf("%f %f %f\n", &p[k].a, &p[k].b, &p[k].c);
            p[k].tong = p[k].a + p[k].b + p[k].c;
        }
        else
        {
            for(int i = 1; i < n; i++)
            {
                for(int j = i + 1; j <= n; j++)
                {
                    if(p[i].tong > p[j].tong)
                    {
                        struct sinhvien tmp;
                        tmp = p[i];
                        p[i] = p[j];
                        p[j] = tmp;
                    }
                }
            }
            printf("%d\n", n);
            printf("%d\n", k);
            for(int i = 1; i <= n; i++)
                printf("%d %s %.1f %.1f %.1f\n", p[i].ma, p[i].ten, p[i].a, p[i].b, p[i].c);
            break;
        }
    }

    return 0;
}
