#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool dx(char *s)
{
    int d = 0;
    for(int i = 0; i < strlen(s) / 2; i++)
        if(s[i] != s[strlen(s) - i - 1])
            d++;
    if(d > 1) return 0;
    else if (d == 0 && !(strlen(s) & 1)) return 0; // abccba - NO
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[21];
        scanf("%s", s);
        if(dx(s)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
