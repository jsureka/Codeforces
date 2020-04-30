#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>=0&&num<=100)
    {
        if(num%2==0)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
}
