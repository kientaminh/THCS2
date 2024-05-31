#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[20];
        char str[20] = {'\0'};
        bool kt = 1;
        scanf("%s", s);
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] != '8' && s[i] != '0' && s[i] != '1' && s[i] != '9')
            {
                printf("INVALID\n");
                kt = 0;
                break;
            }
            if(s[i] == '8') s[i] = '0';
            else if(s[i] == '9') s[i] = '0';
        }
        if(kt == 1)
        {
            int j = 0, i = 0;
            while(s[j] == '0') j++;
            for(; j < strlen(s); j++)
            {
                str[i] = s[j];
                i++;
            }
            if(str[0] == '\0') printf("INVALID\n");
            else printf("%s\n", str);
        }
    }
    return 0;
}
