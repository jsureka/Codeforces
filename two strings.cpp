#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm> // for lexicographical_compare()
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    char a[n+1];
    char b[n+1];
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    getchar();

    //printf("%s %s",a,b);
    for(int i=0; i<n;i++)
    {

        for(int j=0;j<n&&j!=i;j++)
    {
        if(i==0)
            j=1;
        swap(a[i],a[j]);
        swap(b[i],b[j]);
        int ret=strcmp(a,b);
        if(ret<=0)
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);

            }
            else
            {
                printf("YES\n%d %d %d",i+1,j+1,strcmp(a,b));
                return 0;
            }
    }
    }
    printf("NO");


}
