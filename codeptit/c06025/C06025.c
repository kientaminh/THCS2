#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void Swap(char *a, char *b){
    char temp[1001];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void strRev(char *a)
{
    int l = 0, r = strlen(a) - 1;
    while(l < r)
    {
        char tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char a[1001], b[1001], res[1001] = {0};
        scanf("%s %s", a, b);
        if(strcmp(a, b) < 0 && strlen(a) <= strlen(b))
            Swap(a, b);
        strRev(a);
        strRev(b);
        while(strlen(b) < strlen(a)) strcat(b, "0");
//        printf("%s\n", b);
        int carry = 0, n = 0;
        for(int i = 0; i < strlen(a); i++)
        {
            int s = 0;
            if(carry == 1) b[i]++;
            if(a[i] < b[i])
            {
                s = 10 + (a[i] - 48) - (b[i] - 48);
                carry = 1;
            }
            else
            {
                s = (a[i] - 48) - (b[i] - 48);
                carry = 0;
            }
            res[n++] = (char)(s + 48);
        }
        while(res[n - 1] == '0') n--;
        for(int i = n - 1; i >= 0; i--)
            printf("%c", res[i]);
        printf("\n");
    }

    return 0;
}
