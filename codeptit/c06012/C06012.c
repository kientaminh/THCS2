#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int dx(char s[])
{
    for(int i = 0; i < strlen(s) / 2; i++)
        if(s[i] != s[strlen(s) - i - 1] || (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7'))
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
