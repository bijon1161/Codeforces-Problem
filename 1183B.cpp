#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,g,n,kk;
    cin>>q;

    while(q--)
    {
     cin>>n>>kk;
     int arr[n];

     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

      sort(arr,arr+n);

      if(abs((arr[0]+kk)-arr[n-1] )<=kk)
      {
          cout<<arr[0]+kk<<endl;
      }
      else
        cout<<"-1"<<endl;
    }


    return 0;
}