#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void kt(char s[])
{
    for(int i = 0; i < strlen(s); i++)
        if(!islower(s[i]))
           s[i] += 32;
    s[0] -= 32;
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char s[100];
        gets(s);
        int a[10][10], n = 0;
        char *token = strtok(s, " ");
        while(token != NULL)
        {
            kt(token);
            strcpy(a[n++], token);
            token = strtok(NULL, " ");
        }
        for(int i = 1; i < n - 1; i++)
            printf("%s ", a[i]);
        strupr(a[0]);
        printf("%s, %s\n", a[n - 1], a[0]);
    }

    return 0;
}
