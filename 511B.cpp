#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,i,j,MAX=0;
    cin>>n;
    while(n>0)
    {
        cin>>i>>j;
        if(MAX<(i+j))
        {
            MAX=i+j;
        }
        n--;
    }
    cout<<MAX;
}

