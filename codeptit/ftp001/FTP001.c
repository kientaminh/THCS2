#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int k = 1;
        for(int j = 0; j < n; j++)
        {
            if(j > i)
                printf("%d ", k++);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
