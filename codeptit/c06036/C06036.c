#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100001];
    gets(s);
    printf("%d", strlen(s) - 1);
    return 0;
}
