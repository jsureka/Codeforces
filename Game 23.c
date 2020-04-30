#include<stdio.h>
int main()
{
    int m,n,i,j,count=0;
    scanf("%d %d",&n,&m);
    if(m==n)
    printf("0");
    else if(m%n==0)
    {
        m=m/n;
    do
        {
            if(m%2==0)
            {
                m=m/2;
                count++;
            }
            else
                {
                   if(m%3==0)
                {
                   m=m/3;
                count++;
            }
            else
            {
                count=-1;
                break;
            }

                }
        }while(m!=1);
        printf("%d",count);
    }
    else if(m%n!=0||m<n*2)
    {
        printf("-1");
    }

}
