#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

struct diem
{
    float x, y;
};

float dt(struct diem a, struct diem b)
{
    float d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    return d;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        struct diem A, B, C;
        scanf("%f%f%f%f%f%f", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
        float AB = dt(A, B);
        float AC = dt(A, C);
        float BC = dt(B, C);
        if(AB + AC > BC && AB + BC > AC && AC + BC > AB)
            printf("%.3f\n", AB + BC + AC);
        else printf("INVALID\n");
    }

    return 0;
}
