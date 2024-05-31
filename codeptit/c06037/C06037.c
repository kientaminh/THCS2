#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[55];
    scanf("%s", s);
    int vt1[30] = {0}, vt2[30] = {0}, d = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(vt1[s[i] - 'A'] == 0)
            vt1[s[i] - 'A'] = i + 1;
        else vt2[s[i] - 'A'] = i + 1;
    }
    for(int kt1 = 0; kt1 < 26; kt1++)
        for(int kt2 = 0; kt2 < 26; kt2++)
            if(vt1[kt1] < vt1[kt2] && vt1[kt2] < vt2[kt1] && vt2[kt1] < vt2[kt2])
                d++;
    printf("%d", d);

    return 0;
}
