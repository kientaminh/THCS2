#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int d1 = 0, d2 = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(isalpha(s[i])) d1++;
        else if(isdigit(s[i])) d2++;
    }
    printf("%d %d %d", d1, d2, strlen(s) - d1 - d2);
    return 0;
}
