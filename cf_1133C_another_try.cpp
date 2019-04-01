#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int x,y,ans=1;
    for(i=0;i<n;i++)
    {
        x=upper_bound(ara,ara+n,ara[i]+5)-ara-1;
        //cout<<x<<" "<<i<<" "<<ara[x]<<" "<<ara[i]<<endl;
        y=x-i+1;
        ans=max(ans,y);
    }
    cout<<ans<<endl;
}
