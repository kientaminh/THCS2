#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    while(N--) {
        double n;
        scanf("%lf", &n);
        printf("%.15lf\n", 1/n);
    }

    return 0;
}
