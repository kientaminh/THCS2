#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int check(char s[])
{
    if(s[0] == '0') return 0;
    int l = 1, r = strlen(s) - 1;
    while(l <= r)
    {
        if(!isdigit(s[l]))
            return 0;
        if(!isdigit(s[r]))
            return 0;
        l++;
        r--;
    }
    return 1;
}

int cs(char s[])
{
    int cnt[10] = {0};
    int l = 0, r = strlen(s) - 1;
    while(l <= r)
    {
        cnt[s[l] - 48] = 1;
        cnt[s[r] - 48] = 1;
        l++;
        r--;
    }
    for(int i = 0; i < 10; i++)
        if(!cnt[i])
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
        if(!check(s)) printf("INVALID\n");
        else
        {
            if(cs(s)) printf("YES\n");
            else printf("NO\n");
        }

    }

    return 0;
}
