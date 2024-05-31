#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int stang(char s[])
{
    for(int i = 0; i < strlen(s) - 1; i++)
        if(s[i] >= s[i + 1])
            return 0;
    return 1;
}

int sbang(char s[])
{
    for(int i = 0; i < strlen(s) - 1; i++)
        if(s[i] != s[i + 1])
            return 0;
    return 1;
}

int locPhat(char s[])
{
    for(int i = 0; i < strlen(s); i++)
        if(s[i] != '6' && s[i] != '8')
            return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char x[10], y[10];
        scanf("%s %s", x, y);
        int d1 = 0, d2 = 0, d3 = 0;
        char *token = strtok(y, ".");
        while(token != NULL)
        {
            if(stang(token)) d1++;
            else if(sbang(token)) d2++;
            if(locPhat(token)) d3++;
            token = strtok(NULL, ".");
        }
        if(d1 == 2 || d2 == 2 || d3 == 2)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
