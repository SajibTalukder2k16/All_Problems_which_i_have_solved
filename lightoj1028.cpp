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
int divisor(llu n)
{
    llu sqrtn=sqrt(n);
    int result=1;
    for(int i=0;i<prime.size() && prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
            int cnt=1;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
            }
            //cout<<cnt<<endl;
            sqrtn=sqrt(n);
            result*=cnt;
        }
    }
    if(n!=1)
        result*=2;
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
    int test_cases;
    cin>>test_cases;
    llu num;
    for(i=1;i<=test_cases;i++)
    {
        cin>>num;
        cout<<"Case "<<i<<": "<<divisor(num)-1<<endl;
    }
}
