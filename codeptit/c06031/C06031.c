#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[51];
    scanf("%s", s);
    int l[51], mx = 1;
    for(int i = 0; i < strlen(s); i++)
    {
        l[i] = 1;
        for(int j = 0; j < i; j++)
            if(s[i] > s[j] && l[i] < l[j] + 1)
                l[i] = l[j] + 1;
        mx = (mx < l[i]) ? l[i] : mx;
    }
    printf("%d ", 26 - mx);

    return 0;
}
