#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
#define llu long long int
#define M 1000001
int marked[M/64 + 2];
#define on(x) (marked[x/64] &(1<<((x%64)/2)))
#define mark(x) (marked[x/64]|=(1<<((x%64)/2)))
vector<llu>divisor;
vector<pair<llu,llu>>vec;
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
llu ETF(llu n)
{
    llu sqrtn=sqrt(n);
    llu result=n;
    for(llu i=0;i<prime.size() && prime[i]<=sqrtn;i++)
    {
        if(n%prime[i]==0)
        {
            //cout<<n<<endl;
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            sqrtn=sqrt(n);
            result/=prime[i];
            result*=(prime[i]-1);


        }
    }
    if(n!=1)
    {
        result/=n;
        result*=(n-1);
        //result/=n;
    }
    //cout<<n<<endl;
    return result;
}
llu bin_search(llu n)
{
    llu low=0;
    llu high=vec.size()-1;
    llu mid;
    llu res=40;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(vec[mid].first==n)
            {
                return mid;
            }
        else if(vec[mid].first<n)
            low=mid+1;
        else
            high=mid-1;

    }
    return mid;
}
llu bin_divisor(llu n)
{
    llu low=0;
    llu high=divisor.size()-1;
    llu mid;
    llu success;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(divisor[mid]==n)
            return mid;
        if(divisor[mid]>n)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
            success=mid;
        }
    }
    return success;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    sieve(M);
    prime.push_back(2);
    llu i,j,k;
    for(i=3;i<=M;i+=2)
        if(isPrime(i))
            prime.push_back(i);
    int test_cases;
    llu num,t,d;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        divisor.clear();
        vec.clear();
        cout<<"Case "<<i<<endl;
        cin>>num>>t;
        for(k=1;k*k<=num;k++)
        {
            if(num%k==0)
            {
                divisor.push_back(k);
                if(num/k!=k)
                    divisor.push_back(num/k);
            }

        }
        //cout<<num<<"\tSajib\t"<<endl;
        //cout<<divisor.size()<<endl;;
        sort(divisor.begin(),divisor.end());
        //for(i=0;i<divisor.size();i++)
        //{
        //    cout<<"\t"<<divisor[i]<<endl;
       // }
        llu sum=0;
        for(j=0;j<divisor.size();j++)
        {
            sum+=ETF(num/divisor[j]);
            //cout<<"BaBA  "<<sum<<" "<<divisor[j]<<endl;
            vec.push_back(make_pair(divisor[j],sum));
        }
        while(t--)
        {
            cin>>d;
            if(d<=0)
                cout<<"0"<<endl;
            else
            {
                //cout<<d<<"\t";
                d=divisor[bin_divisor(d)];
                //cout<<d<<endl;
                llu out=bin_search(d);
                cout<<vec[out].second<<endl;
            }

        }
    }
}

