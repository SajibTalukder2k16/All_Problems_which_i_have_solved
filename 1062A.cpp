#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
        cin>>ara[i];
    int cnt=0,mx=0;
    if(ara[0]==1)
    {
        for(i=0;i<n-1;i++)
        {
            if(ara[i]==ara[i+1]-1)
                cnt++;
            else
                break;
        }
    }
    if(cnt>mx)
        mx=cnt;
    cnt=0;
    if(ara[n-1]==1000)
    {
        for(i=n-1;i>0;i--)
        {
            if(ara[i]==ara[i-1]+1)
                cnt++;
            else
                break;
        }
    }
    if(cnt>mx)
        mx=cnt;
    cnt=0;
    for(i=1;i<n-1;i++)
    {
       // cout<<ara[i-1]<<" "<<ara[i]<<" "<<ara[i+1]<<endl;
        if(ara[i]==ara[i-1]+1 && ara[i]==ara[i+1]-1)
            {
                ++cnt;
                //cout<<cnt<<endl;
            }
        else
        {
            if(cnt>mx)
            {
                mx=cnt;
            }
            cnt=0;
        }
    }
    if(cnt>mx)
    {
        mx=cnt;
    }
    cout<<mx<<endl;
}
