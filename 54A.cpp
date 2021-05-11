#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool x=true;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]>str[i+1]){
            str[i]='*';x=false;
            break;
        }
    }
    if(x)str[str.length()-1]='*';
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='*')cout<<str[i];
    }
    return 0;
}

