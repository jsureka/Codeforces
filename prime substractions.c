#include<stdio.h>
#include<math.h>
int isPrime(int n)
	{
	    int i,flag=1;
	    if(n==2||n==3||n==5||n==7||n==11)
            return 1;

	for (i = 2; i <= sqrt(n) / 2; i++) {

        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 0) {
       return 0;
    }
    else {
        return 1;
    }
	}

int main()
{
    long long int k,t,x,y,p,i,j,o;
    scanf("%I64d",&t);
    int ch[t];
    for(k=0;k<t;k++)
    {
     scanf("%I64d %I64d",&x,&y);
     o=x-y;
    for(i=2;i<o;i++)
    {

        if(isPrime(i)==1)
        {

            if(o%i==0)
            {
                ch[k]=1;
                break;

            }
        }
    }

    if(ch[k]!=1)
        ch[k]=0;
    }
    for(k=0;k<t;k++)
    {
        if(ch[k]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
	}

