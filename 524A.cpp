
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,s=0,n,k[123];
    double m,l;
    cin>>n>>m;
    k[0]=2;
    k[1]=5;
    k[2]=8;
    for(int i=0;i<3;i++)
    {
        l=k[i]*n;
        s=s+(int)ceil(l/m);
    }
    cout<<s<<endl;
}
