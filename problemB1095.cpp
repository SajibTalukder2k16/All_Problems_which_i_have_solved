#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i;
    int minn=1000000;
    int maxx=0;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]<minn)
            minn=ara[i];
        if(ara[i]>maxx)
            maxx=ara[i];
    }
    sort(ara,ara+n);
    cout<<min((ara[n-2]-ara[0]),(ara[n-1]-ara[1]));
}
