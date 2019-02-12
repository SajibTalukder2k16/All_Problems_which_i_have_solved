#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        llu a,b,k,x;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            x=a*(k/2)-b*(k/2);
        }
        else
        {
            x=a*(k/2)-b*(k/2)+a;
        }
        cout<<x<<endl;
    }
}
