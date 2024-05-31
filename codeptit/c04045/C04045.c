#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int size = 0, chan = 0, le = 0;
        char k = ' ';
        while(k != '\n')
        {
            int x;
            scanf("%d", &x);
            if(!(x & 1)) chan++;
            else le++;
            size++;
            k = getchar();
        }
        if(!(size & 1) && (chan > le) || (size & 1) && (chan < le))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
