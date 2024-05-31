#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//int front, back;
//
//int q_size()
//{
//    return back - front;
//}
//
//void push(int queue[], int value)
//{
//    queue[back] = value;
//    back++;
//}
//
//int pop(int queue[])
//{
//    int value = queue[front];
//    front++;
//    return value;
//}

int main()
{
    int n, t;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    for(int i = 0; i < n; i++)
    {
        if(i < n - t)
            printf("%d ", a[i + t]);
        else printf("%d ", a[i - (n - t)]);
    }

    return 0;
}
