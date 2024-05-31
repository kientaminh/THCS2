#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int top = 0;

bool isEmpty(char *s)
{
    if(top == -1)
        return 1;
    return 0;
}

void push(char *s, char c)
{
    s[top++] = c;
}

void pop()
{
    top--;
}

int main()
{
    char s[1001];
    int a[150] = {0};
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++)
        a[s[i]]++;
    if(a['('] == a[')'] && a['['] == a[']'] && a['{'] == a['}'] && !(a['\''] & 1) && !(a['\"'] & 1))
        printf("1");
    else printf("0");


    return 0;
}
