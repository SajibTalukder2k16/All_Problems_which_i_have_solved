#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    llu test_cases;
    cin>>test_cases;
    llu i;
    for(i=1;i<=test_cases;i++)
    {
    llu n;
    cin>>n;
    llu count=0;
    while(n>0)
    {
        if(n&1)
            count++;
        n/=2;
    }
    cout<<"Case "<<i<<": ";
    if(count&1)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
    }
}
