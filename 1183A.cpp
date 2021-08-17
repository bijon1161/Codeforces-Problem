#include<bits/stdc++.h>
using namespace std;
int sumf(int bb)
{
    int sum=0,r;
   while(bb!=0)
    {
     r=bb%10;
       sum=sum+r;

     bb=bb/10;
    }
    return sum;
}
int main()
{
    int aa,n,u,sum1;
    cin>>aa;

    int t=aa;

    t=aa;
    sum1=sumf(aa);
    while(1){
    if(sum1%4==0){
        cout<<aa<<endl;
        break;
    }
      aa++;
      sum1= sumf(aa);

    }
    return 0;
}