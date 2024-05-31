#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

struct tamgiac
{
    float a, b, c, dt;
};

int main()
{
    int t;
    scanf("%d", &t);
    struct tamgiac x[100];
    for(int i = 0; i < t; i++)
    {
        scanf("%f%f%f", &x[i].a, &x[i].b, &x[i].c);
        float p = (x[i].a + x[i].b + x[i].c) / 2;
        x[i].dt = sqrt(p * (p - x[i].a) * (p - x[i].b) * (p - x[i].c));
    }
    for(int i = 0; i < t - 1; i++)
    {
        for(int j = i + 1; j < t; j++)
        {
            if(x[i].dt > x[j].dt)
            {
                struct tamgiac tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
    for(int i = 0; i < t; i++)
        printf("%.f %.f %.f\n", x[i].a, x[i].b, x[i].c);
    return 0;
}
