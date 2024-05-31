#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

struct diem
{
    double x, y;
};

double dt(struct diem a, struct diem b)
{
    double d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    return d;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        struct diem A, B, C;
        scanf("%lf%lf%lf%lf%lf%lf", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
        double AB = dt(A, B);
        double AC = dt(A, C);
        double BC = dt(B, C);
        if(AB + AC > BC && AB + BC > AC && AC + BC > AB)
        {
            double p = (AB + AC + BC) / 2;
            double s = sqrt(p * (p - AB) * (p - AC) * (p - BC));
            printf("%.2lf\n", s);
        }
        else printf("INVALID\n");
    }

    return 0;
}
