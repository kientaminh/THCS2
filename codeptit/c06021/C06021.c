#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int kt(char s[])
{
    if(s[0] == '0') return 0;
    for(int i = 0; i <= strlen(s) / 2; i++)
        if(isalpha(s[i]) || isalpha(s[strlen(s) - i - 1]))
            return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {

        char s[1001];
        scanf("%s", s);
        if(kt(s))
        {
            int le = 0, chan = 0;
            if((strlen(s) & 1))
            {
                for(int i = 0; i <= strlen(s) / 2; i++)
                {
                    if((s[i] & 1))
                        le++;
                    else chan++;
                    if(s[strlen(s) - i - 1] & 1)
                        le++;
                    else chan++;
                }
                if(le <= chan) printf("NO\n");
                else printf("YES\n");
            }
            else
            {
                for(int i = 0; i < strlen(s) / 2; i++)
                {
                    if((s[i] & 1))
                        le++;
                    else chan++;
                    if(s[strlen(s) - i - 1] & 1)
                        le++;
                    else chan++;
                }
                if(le >= chan) printf("NO\n");
                else printf("YES\n");
            }
        }
        else printf("INVALID\n");
    }
    return 0;
}
