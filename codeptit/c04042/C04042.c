#include <stdio.h>
#include <stdbool.h>


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], c = 0;
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        bool kt = false;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] == a[i])
                {
                    c = a[i];
                    kt = true;
                    break;
                }
            }
            if(kt == true) break;

        }
        if(kt == false) printf("NO\n");
        else printf("%d\n", c);
    }

    return 0;
}
