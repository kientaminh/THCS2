#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[50];
        scanf("%s", s);
        int a[50], n = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] == 'I') a[i] = 1;
            else if(s[i] == 'V') a[i] = 5;
            else if(s[i] == 'X') a[i] = 10;
            else if(s[i] == 'L') a[i] = 50;
            else if(s[i] == 'C') a[i] = 100;
            else if(s[i] == 'D') a[i] = 500;
            else a[i] = 1000;
        }
        int sum = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(a[i] < a[i + 1] && i + 1 < strlen(s))
            {
                sum += a[i + 1] - a[i];
                i++;
                continue;
            }
            sum += a[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}
