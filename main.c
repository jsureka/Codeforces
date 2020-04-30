#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b==c+d||a+c==b+d||b+c==a+d)
        printf("YES");
    else
        printf("NO");
    return 0;
}
