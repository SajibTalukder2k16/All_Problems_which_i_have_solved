#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long
llu josephus(llu n,llu k)
{
    if(n==1)
        return 1;
    else
        return (josephus(n-1,k)+k-1)%n+1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        llu n,k;
        cin>>n>>k;
        cout<<"Case "<<i<<": "<<josephus(n,k)<<endl;
    }
}
