#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[101], s2[101];
    char a1[10][10], a2[10][10];
    int n1 = 0, n2 = 0;
    gets(s1);
    gets(s2);
    char *token1 = strtok(s1, " ");
    while(token1 != NULL)
    {
        int kt = 1;
        for(int i = 0; i < n1; i++)
        {
            if(strcmp(token1, a1[i]) == 0)
            {
                kt = 0;
                break;
            }

        }
        if(kt) strcpy(a1[n1++], token1);
        token1 = strtok(NULL, " ");
    }
    char *token2 = strtok(s2, " ");
    while(token2 != NULL)
    {
        int kt = 1;
        for(int i = 0; i < n2; i++)
        {
            if(strcmp(token2, a2[i]) == 0)
            {
                kt = 0;
                break;
            }
        }
        if(kt) strcpy(a2[n2++], token2);
        token2 = strtok(NULL, " ");
    }
    for(int i = 0; i < n1 - 1; i++)
    {
        for(int j = i + 1; j < n1; j++)
        {
            if(strcmp(a1[j], a1[i]) < 0)
            {
                char tmp[101];
                strcpy(tmp, a1[j]);
                strcpy(a1[j], a1[i]);
                strcpy(a1[i], tmp);
            }
        }
    }
    for(int i = 0; i < n1; i++)
    {
        int kt = 1;
        for(int j = 0; j < n2; j++)
        {
            if(strcmp(a1[i], a2[j]) == 0)
            {
                kt = 0;
                break;
            }
        }
        if(kt) printf("%s ", a1[i]);
    }
    return 0;
}
