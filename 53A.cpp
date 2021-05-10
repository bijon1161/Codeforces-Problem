#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n;
    cin>>n>>s;
    int q[26]={0};
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            string z=s.substr(i,j);
            for(int k=0;k<26;k++)
                q[k]=0;
            for(int k=0;k<z.length();k++)
                q[z[k]-'a']++;
            int f=1;
            for(int k=0;k<26;k++){
                if(q[k]>j/2)
                {
                    f=0;break;
                }
            }
            if(f==1){
                cout<<"YES"<<endl<<z;
                return 0;
            }
            n=s.length();
        }
    }
    cout<<"NO";
    return 0;
}



