#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a=1,b=1,c,n;
    cin>>n;
    if(n%3==0)
    {
        c=n-2;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
            c=n-3;
            b=2;
         cout<<a<<" "<<b<<" "<<c<<endl;
    }
}

