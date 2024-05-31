#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    while(N--) {
        int n;
        scanf("%d", &n);
        if(sqrt(n) == (int)sqrt(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
