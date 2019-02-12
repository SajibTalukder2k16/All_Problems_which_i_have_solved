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
vector<pair<llu,llu>> factorization(llu n)
{
    vector<pair<llu,llu>>prime_power;
    llu sqrtn=sqrt(n);
    for(int i=0;i<prime.size() && prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
            int freq=0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                freq++;
            }
            prime_power.push_back(make_pair(prime[i],freq));
            //cout<<cnt<<endl;
            sqrtn=sqrt(n);
        }
    }
    if(n!=1)
        prime_power.push_back(make_pair(n,1));
    return prime_power;
}
llu lcm(llu a,llu b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve(M);
    prime.push_back(2);
    int i,j,k;
    for(i=3;i<=M;i+=2)
        if(isPrime(i))
            prime.push_back(i);
    int tests,cases;
    cin>>tests;
    for(cases=1;cases<=tests;cases++)
    {
    vector<pair<llu,llu>>A,B,L;
    llu a,b,l;
    cin>>a>>b>>l;
    llu x=lcm(a,b);
    if(l%x!=0)
    {
        cout<<"Case "<<cases<<": impossible"<<endl;
        continue;
    }
    A=factorization(a);
    B=factorization(b);
    L=factorization(l);
    int len1=A.size();
    int len2=B.size();
    int len=L.size();
    for(i=0;i<len;i++)
    {
        for(j=0;j<len1;j++)
        {
            if(L[i].first==A[j].first && L[i].second==A[j].second)
            {
                L[i].second=0;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(L[i].first==B[j].first && L[i].second==B[j].second)
            {
                L[i].second=0;
            }
        }
    }
    //cout<<l<<endl;
    llu result=1;
    for(i=0;i<len;i++)
    {
        //cout<<L[i].first<<" "<<L[i].second<<endl;
        result*=powl(L[i].first,L[i].second);
    }

    cout<<"Case "<<cases<<": "<<result<<endl;
    }

}

