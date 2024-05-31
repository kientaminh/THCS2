#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void strRev(char *s) //dao xau
{
    int l = 0, r = strlen(s) - 1;
    while(l < r)
    {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        l++;
        r--;
    }
}

void cong(char *s1, char *s2, char *res)
{
    // dao xau s1, s2
    strRev(s1);
    strRev(s2);
    //them so 0 vao xau
    while(strlen(s1) < strlen(s2))
        strcat(s1, "0");
    while(strlen(s2) < strlen(s1))
        strcat(s2, "0");

    int carry = 0, n = 0;
    for(int i = 0; i < strlen(s1); i++)
    {
        int s = (s1[i] - 48) + (s2[i] - 48) + carry;
        res[n++] = (s % 10 + 48);
        carry = s / 10;
    }
    //neu bien carry != 0
    if(carry > 0) strcat(res, "1");
    //dao xau res
    strRev(res);
}

int main()
{
    char s[201];
    scanf("%s", s);
    while(strlen(s) > 1)
    {
        int m = strlen(s) / 2;
        char s1[101] = {}, s2[101] = {};
        //khoi tao mang s1, s2
        strncpy(s1, s, m);
        strncpy(s2, s + m, strlen(s) - m);
        //cong xau
        char res[201] = {};
        cong(s1, s2, res);
        printf("%s\n", res);
        strcpy(s, res);
    }

    return 0;
}
