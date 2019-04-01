#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int n;
    cin>>n;
    int  len=n*2;
    vector<int>vec[len+1];
    int i,a;
    for(i=1;i<=len;i++)
    {
        cin>>a;
        vec[a].push_back(i);
    }
    llu sum=0;
    int pos=1;
    for(i=1;i<=n;i++)
    {
        sum+=abs(pos-vec[i][0]);
        pos=vec[i][0];
    }
    pos=1;
    for(i=1;i<=n;i++)
    {
        sum+=abs(pos-vec[i][1]);
        pos=vec[i][1];
    }
    cout<<sum<<endl;
}
