
#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int n[m],a[m],b[m],c[m],d[m],flag[m];
    for(int i=0;i<m;i++)
    {


            scanf("%d %d %d %d %d",&n[i],&a[i],&b[i],&c[i],&d[i]);

        int lower=n[i]*(a[i]-b[i]);
        int upper=n[i]*(a[i]+b[i]);
        int low=c[i]-d[i];
        int up=c[i]+d[i];
        if((lower>up&&upper>up)||(lower<low&&upper<low))
           flag[i]=0;
        else
            flag[i]=1;
    }
    for(int i=0;i<m;i++)
    {
        if(flag[i]==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
