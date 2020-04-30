#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],count;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);

             count=0;
             if(arr[i]==1)
             {
                  printf("%d\n",count+1);

             }


               else if(arr[i]%2==0)
                {
                    while(arr[i]>1)
                    {
                        arr[i]=arr[i]/2;
                        if(arr[i]%2!=0&&arr[i]!=1)
                        {
                            arr[i]--;
                            count++;
                        }
                        count++;
                    }
                     printf("%d\n",count+1);

                }
                else{

                    arr[i]--;
                            count++;
                            while(arr[i]>1)
                    {
                        arr[i]=arr[i]/2;
                        if(arr[i]%2!=0&&arr[i]!=1)
                        {
                            arr[i]--;
                            count++;
                        }
                        count++;
                }
                 printf("%d\n",count+1);

        }

    }

}
