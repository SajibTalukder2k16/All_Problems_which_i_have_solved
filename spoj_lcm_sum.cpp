#include<bits/stdc++.h>
using namespace std;
#define llu long long int
llu result[1000002];
llu phi[1000002];
void pre_calculation(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        phi[i]=i;
    for(i=2;i<=n;i++)
    {
        if(phi[i]==i)
            for(j=i;j<=n;j+=i)
            {
                phi[j]*=i-1;
                phi[j]/=i;
            }
    }
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j+=i)
        {
            result[j]+=phi[i]*i;
        }
}
int main()
{
    pre_calculation(1000000);
    int test_cases,num;
    cin>>test_cases;
    while(test_cases--)
    {
        cin>>num;
        llu res=result[num]+1;
        res*=num;
        res/=2;
        cout<<res<<endl;
    }
}
