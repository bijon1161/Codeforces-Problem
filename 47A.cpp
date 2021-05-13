#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int x=n;
    if(m%2==0)
    {
        int y=m/2;
        cout<<x*y<<endl;
    }
    else
    {
        int z=m/2;
        x=x*z;
        cout<<x+(n/2)<<endl;
    }
}

