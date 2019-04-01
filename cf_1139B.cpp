#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>n;
    vector<int>vec;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    int mx=vec[n-1];
    int mn;
    long long int sum=vec[n-1];
    for(i=n-2;i>=0;i--)
    {
         mx=min(mx-1,vec[i]);
         //cout<<mx<<" "<<sum+mx<<endl;
         if(mx>0)
            sum+=mx;
        else
            mx=0;
    }
    cout<<sum<<endl;
}
