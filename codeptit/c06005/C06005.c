#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct string
{
    char a[20][50];
    int b[1000];
};

void lower(char s[])
{
    for(int i = 0; i < strlen(s); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}


int main()
{
    char s[1000];
    gets(s);
    lower(s);
    struct string str;
    for(int i = 0; i < 1000; i++)
        str.b[i] = 0;
    char *token = strtok(s, " ");
    int size = 0;
    while(token != NULL)
    {
        int kt = 1;
        for(int i = 0; i < size; i++)
        {
            if(strcmp(token, str.a[i]) == 0)
            {
                kt = 0;
                str.b[i]++;
            }
        }
        if(kt == 1)
        {
            strcpy(str.a[size], token);
            str.b[size]++;
            size++;
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < size; i++)
        printf("%s %d\n", str.a[i], str.b[i]);
    return 0;
}
