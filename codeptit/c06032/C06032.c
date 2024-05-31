#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Swap(char *a, char *b){
    char tmp[30];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m;
        scanf("%d", &m);
        char s[11][11];
        for(int i = 0; i < m; i++)
            scanf("%s", s[i]);
        for(int i = 0; i < m - 1; i++)               // b ba -> bab
        {
            for(int j = i + 1; j < m; j++)
            {
                char x[30], y[30];
                strcpy(x, s[i]);
                strcat(x, s[j]);
                strcpy(y, s[j]);
                strcat(y, s[i]);
                if(strcmp(x, y) > 0)
                    Swap(s[i], s[j]);
            }
        }
        for(int i = 0; i < m; i++)
            printf("%s", s[i]);
        printf("\n");
    }

    return 0;
}
