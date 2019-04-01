#include<bits/stdc++.h>
using namespace std;
#define mx 100002
int tree[mx];
int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&(-idx));
    }
    return sum;
}
void update(int index,int array_size,int value)
{
    while(index<=array_size)
    {
        tree[index]+=value;
        index+=index&(-index);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_cases,cases;;
    cin>>test_cases;
    for(cases=1;cases<=test_cases;cases++)
    {
    int n,no_of_query;
    cin>>n>>no_of_query;
    memset(tree,0,sizeof tree);
    int ara[n+1];
    int i,idx,value,idx2,sum1,sum2,sum;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        update(i,n,ara[i]);
    }
    int check;
    cout<<"Case "<<cases<<":\n";
    for(i=1;i<=no_of_query;i++)
    {
        cin>>check;
        if(check==1)
        {
            cin>>idx;
            value=ara[idx+1];
            ara[idx+1]=0;
            update(idx+1,n,-value);
            cout<<value<<"\n";
        }
        else if(check==2)
        {
            cin>>idx>>value;
            ara[idx+1]+=value;
            update(idx+1,n,value);
        }
        else if(check==3)
        {
            cin>>idx>>idx2;
            sum1=query(idx);
            sum2=query(idx2+1);
            sum=sum2-sum1;
            cout<<sum<<"\n";
        }
    }

    }
}

/**#include<bits/stdc++.h>
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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
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
**/
