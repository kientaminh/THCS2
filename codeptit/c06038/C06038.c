#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool sovong(char *s)
{
    int d1[11] = {0}, d2[11] = {0}, c = 0;
    for(int i = 0; i < strlen(s); i++)
        d1[s[i] - 48]++;
    //nhan
    for(int i = 2; i <= strlen(s); i++)
    {
        for(int j = 0; j <= 9; j++)
            d2[j] = 0;
        for(int j = strlen(s) - 1; j >= 0; j--)
        {
            int tich = (s[j] - 48) * i + c;
            d2[tich % 10]++;
            c = tich / 10;
        }
        if(c > 0)
            d2[c]++;
        for(int j = 0; j <= 9; j++)
            if(d1[j] != d2[j])
                return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100];
        scanf("%s", s);
        if(sovong(s))
            printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
