
#include<stdio.h>

int main()
{
    int n,i,j,k,a,b,c,d,sum[1234],MAX=0;
    int counter=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        sum[i-1]=a+b+c+d;

    }

    MAX=sum[0];
    for(j=0;j<n;j++)
    {
        if(MAX<sum[j])
        {
           counter++;
        }
        else
            continue;



    }
    printf("%d",counter);


}

