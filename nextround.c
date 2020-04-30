#include<stdio.h>
int main()
{
    int n,k,i,j,count=0,check=0;
    scanf("%d %d",&n,&k);
    int num[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<k;i++)
    {
        if(num[i]==0)
           check++;
    }
    if(k>check)
    k=k-check;
    for(j=k-1; j<n; j++)
    {
        if(num[j]>0)
        {
            if(count<k)
                count=k;
            if(num[k-1]==num[j+1])count++;
        }
    }
    printf("%d",count);

}
