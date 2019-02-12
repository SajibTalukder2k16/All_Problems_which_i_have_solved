#include<bits/stdc++.h>
using namespace std;
#define M 3165
int marked[M/64 + 2];
vector<int>prime;
#define on(x) (marked[x/64]& (1<<((x%64)/2)))
#define mark(x) (marked[x/64] |= (1<<((x%64)/2)))
void sieve(int n)
{
    for(int i=3;i*i<n;i+=2)
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
    return n>1 &&(n==2 || ((n&1) &&(!on(n))));
}
bool psycho(int n)
{
    int sqrtn=sqrt(n);
    int even=0,odd=0;

    for(int i=0;i<prime.size() && prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
            int cnt=0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
               // cout<<n<<" "<<cnt<<endl;
            }
            //cout<<cnt<<endl;
            if(cnt&1)
                odd++;
            else
                even++;
            sqrtn=sqrt(n);
        }
        //cout<<n<<endl;
    }
    if(n!=1)
        odd++;
    //cout<<even<<" "<<odd<<endl;

    if(even>odd)
        return true;
    else
        return false;
}
int main()
{
    sieve(M);
    prime.push_back(2);
    int i;
    for(i=3;i<=M;i+=2)
        if(isPrime(i))
            prime.push_back(i);
    int test_cases;
    cin>>test_cases;
    int num;
    while(test_cases--)
    {
        cin>>num;
        if(psycho(num))
            cout<<"Psycho Number"<<endl;
        else
            cout<<"Ordinary Number"<<endl;
    }
}
