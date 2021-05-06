#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    long long int m,ara[212345];
    scanf("%d",&n);
    scanf("%lld",&m);


        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);

        }
        for(i=0;i<n;i++)
        {
             c=ara[i]/m;
            printf("%d ",c);
            ara[i+1]=ara[i+1]+(ara[i]-m*c);
        }
}

