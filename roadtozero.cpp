
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans[n],x[n],y[n],a[n],b[n],coun=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&x[i],&y[i],&a[i],&b[i]);
        if(x[i]<y[i])
            coun=x[i];

        else
            coun=y[i];
        int mid=abs(x[i]-y[i]);
        ans[i]=coun*b[i]+mid*a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ans[i]);
    }
}
