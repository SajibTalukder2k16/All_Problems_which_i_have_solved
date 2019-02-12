#include<bits/stdc++.h>
using namespace std;
#define llu long long int
vector<int>prime;
#define mod 4294967296
#define M 100000001

int marked[M/64 + 2];

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x) (marked[x/64] |=(1<<((x%64)/2)))
void sieve(llu n)
{

    for(llu i=3;i*i<=n;i+=2)
    {
        if(!on(i))
        {
            for(llu j=i*i;j<=n;j+=2*i)
                mark(j);
        }
    }
}
bool isPrime(llu n)
{
    return n>1 &&(n==2 || ((n&1)&&(!on(n))));
}
llu BigMod(llu B,llu P)
{
    if(P==0)
        return 1;
    llu x=BigMod(B,P/2);
    x=(x*x)%mod;
    if(P&1)
        x=(x*B)%mod;
    return x;

}
int main()
{
    sieve(M);
    prime.push_back(2);
    int i,j,k;
    for(i=3;i<=M;i+=2)
        if(isPrime(i))
            prime.push_back(i);
    int test_cases;
    llu num,x,p;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        cin>>num;
        llu ans=1;
        int len=prime.size();
        for(j=0;j<len && prime[j]<=num;j++)
        {
            p=floor(log10(num)/log10(prime[j]));
            //cout<<prime[j]<<" "<<x<<" "<<ans<<endl;
            x=BigMod(prime[j],p);
            ans*=x;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
