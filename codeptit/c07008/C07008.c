#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void solve(char *s, int *a)
{
    char *token = strtok(s, " + ");
    while(token != NULL)
    {
        int coso = 0, mu = 0;
        bool k = 0;
        for(int i = 0; i < strlen(token); i++)
        {
            if(token[i] >= '0' && token[i] <= '9' && k == 0)
                coso = coso * 10 + (token[i] - 48);
            else if(token[i] >= '0' && token[i] <= '9' && k == 1)
                mu = mu * 10 + (token[i] - 48);
            else k = 1;
        }
        a[mu] += coso;
        token = strtok(NULL, " + ");
    }
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char s1[100001], s2[100001];
        int a[10001] = {0};
        gets(s1);
        gets(s2);
        solve(s1, a);
        solve(s2, a);
        bool k = 0;
        for(int i = 10000; i >= 0; i--)
        {
            if(a[i] != 0)
            {
                if(k == 1) printf(" + ");
                printf("%d*x^%d", a[i], i);
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
