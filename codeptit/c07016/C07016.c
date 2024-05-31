#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

struct thisinh
{
    int ma;
    char ten[100], ngaysinh[20];
    float mon1, mon2, mon3;
    float tong;
};

int main()
{
    int t;
    scanf("%d", &t);
    struct thisinh x[100];
    for(int i = 1; i <= t; i++)
    {
        scanf("\n");
        x[i].ma = i;
        gets(x[i].ten);
        scanf("\n");
        gets(x[i].ngaysinh);
        scanf("%f%f%f", &x[i].mon1, &x[i].mon2, &x[i].mon3);
        x[i].tong = x[i].mon1 + x[i].mon2 + x[i].mon3;
    }
    for(int i = 1; i < t; i++)
    {
        for(int j = i + 1; j <= t; j++)
        {
            if(x[i].tong < x[j].tong)
            {
                struct thisinh tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
    for(int i = 1; i <= t; i++)
        printf("%d %s %s %.1f\n", x[i].ma, x[i].ten, x[i].ngaysinh, x[i].tong);
    return 0;
}
