#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//bool snt(int n)
//{
//    if(n <= 1)return false;
//    if(n <= 3) return true;
//    for(int i = 2; i <= sqrt(n); i++)
//        if(n % i == 0) return false;
//    return true;
//}

const int N = 1000001;
bool check[1000001];
void sang()
{
    check[0] = check[1] = false;
    for(int i = 2; i <= N; i++)
        check[i] = true;
    for(int i = 2; i <= N; i++)
    {
        if(check[i] == true)
        {
            for(int j = i * 2; j <= N; j+=i)
                check[j] = false;
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long l, r;
        scanf("%lld%lld", &l, &r);
        sang();
        int count = 0, l1 = sqrt(l), r1 = sqrt(r);
        for(int i = l1; i <= r1; i++)
            if(check[i]) count++;
        printf("%d\n", count);
    }

    return 0;
}
