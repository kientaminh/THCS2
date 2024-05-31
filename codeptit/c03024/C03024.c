#include <stdio.h>
#include <string.h>

int main()
{
    char a[7], b[7];
    scanf("%s%s", a, b);
    int s1 = 0, s2 = 0;
    for(int i = 0; i < strlen(a); i++)
        s1 += a[i] - 48;
    for(int i = 0; i < strlen(b); i++)
        s2 += b[i] - 48;
    if(s1 <= s2)
        printf("%s %s", a, b);
    else printf("%s %s", b, a);
    return 0;
}
