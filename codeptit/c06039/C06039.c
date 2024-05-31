#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void xoay(char *s)
{
    char c[55];
    strcpy(c, s);
    for(int i = 0; i < strlen(s) - 1; i++)
        s[i] = s[i + 1];
    s[strlen(s) - 1] = c[0];
}

int main()
{
    int n;
    scanf("%d", &n);
    char a[55][55];
    for(int i = 0; i < n; i++)
        scanf("%s", a[i]);
    int mn = 1e9, kt = 1;
    char s[55];
    strcpy(s, a[0]);
    for(int i = 0; i < strlen(s); i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            int k;
            char x[55];
            strcpy(x, a[j]);
            for(k = 0; k < strlen(x); k++)
            {
                if(strcmp(x, s) == 0)
                {
                    cnt += k;
                    break;
                }
                xoay(x);
            }
            if(k == strlen(x))
            {
                kt = 0;
                break;
            }
        }
        if(mn > cnt) mn = cnt;
        xoay(s);
    }
    if(kt != 0) printf("%d", mn);
    else printf("-1");

    return 0;
}
