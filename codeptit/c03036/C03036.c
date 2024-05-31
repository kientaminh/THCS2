#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool dx(char *s)
{
    for(int i = 0; i <= strlen(s) / 2; i++)
        if(s[i] != s[strlen(s) - i - 1])
            return 0;
    return 1;
}

bool cs(char *s)
{
    for(int i = 0; i < strlen(s); i++)
        if(!(s[i] & 1))
            return 0;
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
        {
            if(cs(s))
            {
                int sum = 0;
                for(int i = 0; i < strlen(s); i++)
                    sum += (s[i] - 48);
                if(!(sum & 1))
                    printf("NO\n");
                else printf("YES\n");
            }
            else printf("NO\n");
        }
        else printf("NO\n");

    }
    return 0;
}
