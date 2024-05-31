#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s = 0;
    scanf("%d", &n);
    int a = n;
    while(n > 0)
    {
        int t = 1;
        for(short int i = 1; i <= (n%10); i++) //tich chu so
            t *= i;
        n /= 10;
        s += t;
    }
    if(s == a) printf("1");
    else printf("0");
    return 0;
}
