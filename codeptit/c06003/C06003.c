#include <stdio.h>
#include <string.h>

int main()
{
    //FILE *fi = fopen("input.in", stdin);
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char s[202];
        gets(s);
        int d = 0;
        char *token = strtok(s, " ");
        while(token != NULL)
        {
            d++;
            token = strtok(NULL, " ");
        }
        printf("%d\n", d);
    }
    return 0;
}
