#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a == 0) {
        if(b == 0) printf("NO");
        else printf("%.2f", -c/b);
        return 0;
    }
    float del = b*b - 4*a*c;
    if(del >= 0) {
        if(del == 0) printf("%.2f", -b/(2*a));
        else printf("%.2f %.2f", (-b+sqrt(del))/(2*a), (-b-sqrt(del))/(2*a));
    }
    else printf("NO");
    return 0;
}
