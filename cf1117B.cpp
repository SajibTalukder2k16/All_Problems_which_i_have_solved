#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    llu n,m,k;
    cin>>n>>m>>k;
    int ara[n],i;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    llu sum;
    if(m==k)
        cout<<ara[n-1]*m<<endl;
    else
    {
        llu x=k+1;
        x=m/x;
        llu rem=m%(k+1);
        //cout<<x<<" "<<rem<<endl;
        sum=x*k*ara[n-1]+x*ara[n-2];
        sum+=rem*ara[n-1];
        cout<<sum<<endl;
    }
}
