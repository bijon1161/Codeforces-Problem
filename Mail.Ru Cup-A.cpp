#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,t1,t2,t3,L=0,S=0;
    cin>>x>>y>>z>>t1>>t2>>t3;
    L=abs(x-z)*t2+2*t3+abs(x-y)*t2+t3;
    S=abs(x-y)*t1;
    if(L<=S)
        printf("YES");
    else
        printf("NO");

}


