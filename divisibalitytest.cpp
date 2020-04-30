#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d", &m);
    int count[m]={0};
    int a[m],b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<m;i++)
    {


        for(j=0;;j++)
        {
            if(a[i]%b[i]==0)
                break;
           else if(a[i]<b[i])
              {
                  count[i]=b[i]-a[i];
                  break;
              }
              else if(a[i]>b[i])
              {
                  count[i]=(((a[i]/b[i])+1)*b[i])-a[i];
                  break;
              }

        }

    }
    for(j=0;j<m;j++)
        {
            printf("%d\n",count[j]);
        }
}
