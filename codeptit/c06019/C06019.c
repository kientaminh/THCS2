#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lower(char s[])
{
    for(int i = 0; i < strlen(s); i++)
        if(isupper(s[i]))
            s[i] += 32;
}

int main()
{
    char s[51];
    gets(s);
    char a[10][10];
    int n = 0;
    lower(s);
    char *token = strtok(s, " ");
    while(token != NULL)
    {
        strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n - 1; i++)
        printf("%c", a[i][0]);
    printf("%s@ptit.edu.vn", a[n - 1]);

    return 0;
}
