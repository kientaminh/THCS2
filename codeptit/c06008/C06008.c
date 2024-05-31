#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    gets(s);
    char a[11][11];
    int n = 0;
    char *token = strtok(s, " ");
    while(token != NULL)
    {
        int kt = 1;
        for(int i = 0; i < n; i++)
            if(strcmp(token, a[i]) == 0)
                kt = 0;
        if(kt) strcpy(a[n++], token);
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n; i++)
        printf("%s ", a[i]);
    return 0;
}
