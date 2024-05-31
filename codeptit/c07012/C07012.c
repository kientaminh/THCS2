#include <stdio.h>
#include <stdlib.h>

struct mathang
{
    int ma;
    char ten[100], nhom[100];
    float gmua, gban;
    float loinhuan;
};

int main()
{
    int t;
    scanf("%d", &t);
    struct mathang x[100];
    for(int i = 1; i <= t; i++)
    {
        scanf("\n");
        x[i].ma = i;
        gets(x[i].ten);
        scanf("\n");
        gets(x[i].nhom);
        scanf("%f%f", &x[i].gmua, &x[i].gban);
        x[i].loinhuan = x[i].gban - x[i].gmua;
    }
    for(int i = 1; i < t; i++)
    {
        for(int j = i + 1; j <= t; j++)
        {
            if(x[i].loinhuan < x[j].loinhuan)
            {
                struct mathang tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
    for(int i = 1; i <= t; i++)
        printf("%d %s %s %.2f\n", x[i].ma, x[i].ten, x[i].nhom, x[i].loinhuan);
    return 0;
}
