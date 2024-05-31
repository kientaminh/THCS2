#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[20];
    scanf("%s", s);
    int d[8] = {0};
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '2') d[2]++;
        else if(s[i] == '3') d[3]++;
        else if(s[i] == '5') d[5]++;
        else if(s[i] == '7') d[7]++;
    }
    for(int i = 2; i < 8; i++)
        if(d[i] != 0)
            printf("%d %d\n", i, d[i]);

    return 0;
}
