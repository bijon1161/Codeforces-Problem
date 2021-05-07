#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,m=0,a,b,k;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
           m=((a-b)*k)/2;

        }
        else
        {


            m=(((a-b)*(k-1))/2)+a;

        }
        cout<<m<<endl;
    }
    return 0;
}

