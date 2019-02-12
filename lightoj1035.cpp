#include<bits/stdc++.h>
using namespace std;
#define llu long long int
vector<int>prime;
#define M 101
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
void factFactorize ( int n ,int j) {
    for ( int i = 0; i < prime.size() && prime[i] <= n; i++ ) {
        int x = n;
        int freq = 0;

        while ( x / prime[i] ) {
            freq += x / prime[i];
            x = x / prime[i];
        }
        if(prime[i]!=j)
            cout<<" "<<prime[i]<<" ("<<freq<<") *";
        else
            cout<<" "<<prime[i]<<" ("<<freq<<")";
    }
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
        for(j=num;;j--)
            if(isPrime(j))
                break;
        cout<<"Case "<<i<<": "<<num<<" =";
        factFactorize(num,j);
        cout<<endl;
    }
}
