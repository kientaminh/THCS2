#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001][1001];
    int mx = 0, n = 0;
    while(scanf("%s", a[n]) != -1)
    {
        mx = (mx < strlen(a[n])) ? strlen(a[n]) : mx;
        n++;
    }
    for(int i = 0; i < n; i++)
    {
        if(strlen(a[i]) == mx)
        {
            int d = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(strcmp(a[i], a[j]) == 0)
                {
                    d++;
                    strcpy(a[j], "0");
                }
            }
            printf("%s %d %d\n", a[i], mx, d);
        }
    }
    return 0;
}
