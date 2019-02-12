#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    llu n;
    cin>>n;
    string s;
    cin>>s;
    llu k=s.length();
    int i=1;
    llu sum=1;
    while(n>0)
    {
        sum*=n;
        n-=i*k;
    }
    cout<<sum<<endl;
}
