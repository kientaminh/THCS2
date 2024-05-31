#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100];
        scanf("%s", s);
        int a[100];
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] == 'I') a[i] = 1;
            if(s[i] == 'V') a[i] = 5;
            if(s[i] == 'L') a[i] = 50;
            if(s[i] == 'C') a[i] = 100;
            if(s[i] == 'D') a[i] = 500;
            if
        }
    }


    return 0;
}
