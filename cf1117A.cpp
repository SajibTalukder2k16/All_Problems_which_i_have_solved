#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int n,i;
    cin>>n;
    int ara[n];
    int maxx=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>maxx)
            maxx=ara[i];
    }
    int cnt=0,longest=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]!=maxx)
            cnt=0;
        else if(ara[i]==maxx)
            cnt++;
        if(cnt>longest)
            longest=cnt;
    }
    cout<<longest<<endl;

}
