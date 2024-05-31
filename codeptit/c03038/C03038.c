#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, p, x = 0;
        scanf("%d%d", &n, &p);
        for(int i = n; i >= p; i--)
        {
            if(i % p == 0)
            {
                int j = i;
                while(j % p == 0)
                {
                    x++;
                    j /= p;
                }
            }
        }
        printf("%d\n", x);
    }
    return 0;
}
