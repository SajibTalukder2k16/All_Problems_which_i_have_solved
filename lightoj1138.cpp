#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int count_trailing_zero(llu n)
{
    int freq=0;
    while(n>0)
    {
        freq+=n/5;
        n/=5;
    }
    return freq;
}
llu bin_search(llu n)
{
    llu low=5;
    llu high=5*n;
    llu mid;
    while(low<=high)
    {
        if(((low+high)%2)==1)
            low=low-5;
        mid=(low+high)/2;
        llu p=count_trailing_zero(mid);
        if(p==n)
            return mid;
        else if(p>n)
            high=mid-5;
        else if(p<n)
            low=mid+5;
    }
    return -1;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    int i;
    llu num;
    for(i=1;i<=test_cases;i++)
    {
        cin>>num;
        llu res=bin_search(num);
        if(res!=-1)
            cout<<"Case "<<i<<": "<<res<<endl;
        else
            cout<<"Case "<<i<<": impossible"<<endl;
    }

}
