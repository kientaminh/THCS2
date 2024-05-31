#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    while(N--) {
        long long n;
        scanf("%ld", &n);
        printf("%ld\n", n*n);
    }

    return 0;
}
