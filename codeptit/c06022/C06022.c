#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lwr(char *s)
{
    for(int i = 0; i < strlen(s); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}

int main()
{
    int T;
    scanf("%d\n", &T);
    for(int t = 1; t <= T; t++)
    {
        char s1[201], s2[21], res[201][201] = {};
        gets(s1);
        gets(s2);
        lwr(s2);
        int n = 0;
        char *token = strtok(s1, " ");
        while(token != NULL)
        {
            char c[201];
            strcpy(c, token);
            lwr(c);
            if(strcmp(s2, c) != 0)
            {
                strcpy(res[n], token);
                n++;
            }
            token = strtok(NULL, " ");
        }
        printf("Test %d: ", t);
        for(int i = 0; i < n; i++)
            printf("%s ", res[i]);
        printf("\n");
    }

    return 0;
}
