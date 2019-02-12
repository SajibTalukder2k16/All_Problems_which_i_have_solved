#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int division_by_3(int n)
{
    llu ans;
    if(n%3==0 || (n-1)%3==0)
        ans=(n/3)*2;
    else
        ans=((n/3)*2)+1;
    return ans;
}
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
    llu n,m;
    int ans1,ans2,ans;
    cin>>n>>m;
    if(n==m)
    {
        if(n%3==0 || (n+1)%3==0)
            ans=1;
        else
            ans=0;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    else
    {
        ans2=division_by_3(m);
        ans1=division_by_3(n-1);
        cout<<"Case "<<i<<": "<<ans2-ans1<<endl;
    }
    }
}
