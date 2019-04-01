#include<bits/stdc++.h>
using namespace std;
#define llu long long int
vector<int>prime;
#define M 1000001
int marked[M/64 + 2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x) (marked[x/64] |=(1<<((x%64)/2)))
void sieve(int n)
{

    for(int i=3;i*i<=n;i+=2)
    {
        if(!on(i))
        {
            for(int j=i*i;j<=n;j+=2*i)
                mark(j);
        }
    }
}
bool isPrime(int n)
{
    return n>1 &&(n==2 || ((n&1)&&(!on(n))));
}
vector<pair<llu,llu>>vec;
void factorize(llu n)
{
    llu sqrtn=sqrt(n);
    llu i;
    for(llu i=0;i<prime.size()&& prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
            llu freq=0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                freq++;
            }
            vec.push_back(make_pair(prime[i],freq));
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
        vec.push_back(make_pair(n,1));
}
llu factPrimePower(llu n,llu p)
{
    llu freq=0;
    llu x=n;
    while(x)
    {
        freq+=x/p;
        x/=p;
    }
    return freq;
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
    llu n,b;
    //factorize(1000000000000);
    //for(i=0;i<vec.size();i++)
        //cout<<vec[i].first<<" "<<vec[i].second<<endl;

    cin>>n>>b;
    factorize(b);
    int len=vec.size();
    vector<llu>base_prime_power;

    for(i=0;i<len;i++)
    {
        llu x=factPrimePower(n,vec[i].first)/vec[i].second;
        //cout<<x<<endl;
        base_prime_power.push_back(x);
    }
    llu minn=LLONG_MAX;
    for(i=0;i<base_prime_power.size();i++)
        if(minn>base_prime_power[i])
            minn=base_prime_power[i];
    cout<<minn<<endl;



}
