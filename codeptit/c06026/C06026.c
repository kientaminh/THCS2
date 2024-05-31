#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool dx(char *s)
{
    for(int i = 0; i <= strlen(s) / 2; i++)
        if(s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

int main()
{
    char s[101], a[100001][101];
    int mx = 0, n = 0;
    while(scanf("%s", s) != -1)
    {
        if(dx(s))
        {
            mx = mx < strlen(s) ? strlen(s) : mx;
            strcpy(a[n++], s);
        }
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
            printf("%s %d\n", a[i], d);
        }
    }
    return 0;
}
