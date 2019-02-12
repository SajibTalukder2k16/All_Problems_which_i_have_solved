#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int i,j,n,a;
    for(i=1;i<=T;i++)
    {
        cin>>n;
        int sum=0;
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(a>0)
                sum+=a;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
