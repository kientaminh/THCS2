#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[11];
    scanf("%s", s);
    int so2, so3, so5, so7;
    so2 = so3 = so5 = so7 = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == '2') so2++;
        else if(s[i] == '3') so3++;
        else if(s[i] == '5') so5++;
        else if(s[i] == '7') so7++;
    }
    if(so2 != 0)printf("2 %d\n", so2);
    if(so3 != 0)printf("3 %d\n", so3);
    if(so5 != 0)printf("5 %d\n", so5);
    if(so7 != 0)printf("7 %d\n", so7);
    return 0;
}
