#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i;
    for(i=0;i<n;i++)
        cin>>ara[i];
    int ans=0;
    for(i=1;i<n-1;i++)
    {
        if(ara[i]==0)
        {
            if(ara[i+1]==1 && ara[i-1]==1)
            {
                ans++;
                ara[i+1]=0;
            }
        }
    }
    cout<<ans<<endl;
}
