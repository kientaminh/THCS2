#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    char s1[201], s2[201], s[401];
    while(true)
    {
        scanf("%d", &n);
        if(!n) break;
        scanf("%s%s%s", s1, s2, s);
        char s3[401] = {0}, t[401] = {0};
        strcat(s3, s1);
        strcat(s3, s2);
        int d = 0;
        while(true)
        {
            d++;
            for(int i = 0; i < n; i++)
            {
                t[i * 2] = s2[i];
                t[i * 2 + 1] = s1[i];
            }
            if(strcmp(t, s) == 0)
            {
                printf("%d\n", d);
                break;
            }
            else if(strcmp(t, s3) == 0)
            {
                printf("-1\n");
                break;
            }
            strncpy(s1, t, n);
            strncpy(s2, t + n, n);
        }
    }

    return 0;
}
