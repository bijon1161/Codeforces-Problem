#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;

    cin>>n;

    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
    int i=0;
     while(i<n)
    {
    if(1<i<n && arr[i-1]==1 && arr[i+1]==1 && arr[i]==0)
      {
        c++;
        i=i+2;

      }
      i++;
    }


     cout<<c<<endl;
    c=0;
return 0;
}

