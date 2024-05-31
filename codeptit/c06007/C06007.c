#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    gets(s);
    char c[101];
    scanf("%s", c);
    char *token = strtok(s, " ");
    while(token != NULL)
    {
        if(strcmp(token, c) != 0)
            printf("%s ", token);
        token = strtok(NULL, " ");
    }


    return 0;
}
