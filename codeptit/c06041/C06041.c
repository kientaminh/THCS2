#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100001], a[100001], c = 'a';
    scanf("%s", s);
    int n = 0;
    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        if(s[i] >= c)
        {
            c = s[i];
            a[n++] = s[i];
        }
    }
    for(int i = n - 1; i >= 0; i--)
        printf("%c", a[i]);
    return 0;
}
