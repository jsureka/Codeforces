#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int digitcount(int);

int main()
{
    int n,i,j,k,dup_n,gun,count=0,mun,bas,m;
    scanf("%d",&n);
    dup_n=n;
    k=digitcount(n);
    int array[k];
    for(i=0;i<k;i++)
    {
        array[i]=dup_n%10;
        dup_n=dup_n/10;
    }
    for(j=sqrt(n);j>0;j--)
    {
        count=0;
        gun=j*j;
         bas=digitcount(gun);
        for(m=1;m<=bas;m++)
        {
            mun=gun%10;
            for(i=0;i<=k;i++)
            {

                if(array[i]==mun)
                {
                    count=count+1;
                    array[i]=-1;
                }
            }

            gun=gun/10;
        }
        if(count==bas)
            break;
           // count=0;
    }
   if(count>0)
    printf("%d",k-count);
   else
    printf("-1");

}
int digitcount(int x)
{
    int i,coun=0;
    while(x!=0)
    {
        x=x/10;
        coun++;
    }
    return coun;
}

