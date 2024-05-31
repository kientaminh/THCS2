#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int dx(char s[])
{
    int res = 0;
    if(s[0] != '8' || s[strlen(s) - 1] != '8') return 0;
    for(int i = 0; i < strlen(s) / 2; i++)
    {
        if(s[i] != s[strlen(s) - i - 1])
            return 0;
        res += (s[i] - 48) * 2;
    }
    if((strlen(s) & 1))
        res += (s[strlen(s) / 2] - 48);
    if(res % 10 != 0)
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[501];
        scanf("%s", s);
        if(dx(s)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
