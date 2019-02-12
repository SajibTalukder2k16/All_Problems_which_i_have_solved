#include<bits/stdc++.h>
using namespace std;
#define llu long long int
vector<int>prime;
#define len 31630
char sieve[len];

void primeSieve(llu n)
{
    sieve[0]=sieve[1]=1;
    prime.push_back(2);
    llu i,j;
    for(i=4;i<=n;i+=2)
        sieve[i]=1;
    llu sqrtn=sqrt(n);
    for(i=3;i<=sqrtn;i+=2)
    {
        if(sieve[i]==0)
        {
            for(j=i+i;j<=n;j+=2*i)
                sieve[j]=1;
        }
    }
    for(i=3;i<=n;i+=2)
        if(sieve[i]==0)
            prime.push_back(i);
}
void segmentedSieve(llu a,llu b)
{
    llu dif=b-a+1;

    bool arr[dif];
    llu i,j;
    if(a==1)a++;
    llu sqrtn=sqrt(b);
    memset(arr,0,sizeof arr);
    for(i=0;i<prime.size() && prime[i]<=sqrtn;i++)
    {
        llu p=prime[i];
        j=p*p;
        if(j<a) j=((a+p-1)/p)*p;
        for(;j<=b;j+=p)
        {
            arr[j-a]=1;
        }
    }
    llu res=0;
    for(i=a;i<=b;i++)
        if(arr[i-a]==0)
            cout<<i<<endl;
}

int main()
{
    primeSieve(len);
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        llu a,b;
        cin>>a>>b;
        segmentedSieve(a,b);
        cout<<endl;
    }

}
