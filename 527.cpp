#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,p=0;

    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   for(int i=0;i<n;i=i+2)
   {
       p=arr[i+1]-arr[i];
       sum=sum+p;
   }
   cout<<sum<<endl;
    return 0;
}
