#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool dx(char *s)
{
    if(s[0] - 48 != (s[strlen(s) - 1] - 48) * 2 && (s[0] - 48) * 2 != s[strlen(s) - 1] - 48)
        return 0;
    int l = 1, r = strlen(s) - 2;
    while(l <= r)
    {
        if(s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[20];
        scanf("%s", s);
        if(dx(s))
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
