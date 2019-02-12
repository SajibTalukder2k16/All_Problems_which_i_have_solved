#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(long long n)
{
    int count=0;
    for(ll i=1;i<=n;i*=2)
    {
        if(n&i)
            count++;
    }
    return count;
}
ll next_num(ll n)
{
    ll temp,i;
    for(i=1;i<=n;i*=2)
    {
        if(n&i)
            {
                temp=n+i;
                break;
            }
    }
    int p=check(temp);
    int q=check(n);
    //cout<<p<<" "<<q<<" "<<temp<<endl;
    int difference=q-p;
    //cout<<difference<<endl;
    for(i=0;i<difference;i++)
    {
        temp+=(1<<i);
    }
    return temp;

}
int main()
{
    int test_cases;
    int i;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        ll num;
        cin>>num;
        cout<<"Case "<<i<<": "<<next_num(num)<<endl;
    }
}
