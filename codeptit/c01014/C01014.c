#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    if(a == 0) {
        if(b == 0) printf("Vo so nghiem");
        else printf("Vo nghiem");
        return 0;
    }
    printf("%.2f", -b/a);


    return 0;
}
