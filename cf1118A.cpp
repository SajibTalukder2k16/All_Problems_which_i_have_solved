#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
    llu n,a,b;
    cin>>n>>a>>b;
    double x=(double)b/2.0;
    if(a<=x)
        cout<<n*a<<endl;
    else
    {
        cout<<((n/2)*b)+(n%2)*a<<endl;
    }
    }
}
