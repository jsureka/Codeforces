#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d", &m);
    char strin[m][100]={};
    int a[m],b[m],place1=1,place2=0;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<m;i++)
    {
        int n=1;
        place1=1;
        for(int k=0;;k++)
        {

            if(place1>b[i])
            {
             n=n-1;
             place1=((n*(n-1))/2)+1;
             place2=b[i]-place1;
             break;
            }
            n++;
            place1=((n*(n-1))/2)+1;

        }

                    strin[i][a[i]-n-1]='b';

                    strin[i][a[i]-place2-1]='b';


    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<a[i];j++)
        {
            if(j==a[i]-n-1||j==a[i]-place2-1)
            printf("b");
            else
            printf("a");
        }
        printf("\n");
    }
}
