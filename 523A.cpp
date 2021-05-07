#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,s,c=0;
    cin>>n>>s;
if(s<n){
    cout<<"1"<<endl;
    return 0;
}
        i=n;
        while(i>0)
    {
     if(s>=i)
        {
            s=s-n;
            if(s<n)
                i--;
            else
               i=i;

               c++;
        }
        else
            i--;

    }
    cout<<c;
}

