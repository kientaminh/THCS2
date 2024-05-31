#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int d = 0;
    for(int i = 2; i <= n; i += 2)
    {
        int j = i;
        while(j % 2 == 0)
        {
            d++;
            j /= 2;
        }
    }
    if(d >= k)
        printf("Yes");
    else printf("No");
    return 0;
}
