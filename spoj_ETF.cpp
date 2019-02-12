#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
#define llu long long int
#define M 1001
int marked[M/64 + 2];
#define on(x) (marked[x/64] &(1<<((x%64)/2)))
#define mark(x) (marked[x/64]|=(1<<((x%64)/2)))

void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(!on(i))
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                mark(j);
            }
        }
    }
}
bool isPrime(int n)
{
    return n>1 && (n==2 ||((n&1) && (!on(n))));
}
llu ETF(int n)
{
    int sqrtn=sqrt(n);
    llu result=n;
    for(int i=0;i<prime.size() && prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            sqrtn=sqrt(n);
            result*=(prime[i]-1);
            result/=prime[i];
        }
    }
    if(n!=1)
    {
        result*=(n-1);
        result/=n;
    }
    return result;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve(M);
    prime.push_back(2);
    int i,j;
    for(i=3;i<=M;i+=2)
        if(isPrime(i))
            prime.push_back(i);
    int test_cases,num;
    cin>>test_cases;
    while(test_cases--)
    {
        cin>>num;
        cout<<ETF(num)<<endl;
    }
}
