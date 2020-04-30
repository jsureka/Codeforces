#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,i,n;
    char bit[3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
      fgets(bit,3,stdin);
        if(bit[0]=='+')
            x=x+1;
        else if(bit[0]=='-')
            x=x-1;
    }
    printf("%d",x);

}
