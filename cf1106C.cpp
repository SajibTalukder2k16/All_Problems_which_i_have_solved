#include<bits/stdc++.h>
using namespace std;
#define llu long long int
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
    int p=n/2;
    j=n-1;
    llu sum=0;
    for(i=0;i<p;i++,j--)
    {
        sum+=(ara[i]+ara[j])*(ara[i]+ara[j]);
    }
    cout<<sum<<endl;
}
