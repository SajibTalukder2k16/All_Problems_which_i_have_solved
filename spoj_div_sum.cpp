#include<bits/stdc++.h>
using namespace std;
#define M 100000001
#define llu long long
int marked[M/64 + 2];
vector<int>prime;
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

llu amar_power(llu base,llu power)
{
    if(power==0)
        return 1;
    llu temp=amar_power(base,power/2);
    temp=temp*temp;
    if(power&1)
        temp*=base;
    return temp;
}
void sieve(int n) {
  for (int i = 3; i * i < n; i += 2) {
    if (!on(i)) {
      for (int j = i * i; j <= n; j += i + i) {
        mark(j);
      }
    }
  }
}

bool isPrime(int num) {
  return num > 1 && (num == 2 || ((num & 1) && !on(num)));
}
llu div_sum( llu n ) {
    llu temp=n;
    llu sqrtn = sqrt ( n );
    llu l=prime.size();
    llu sum=1;
    for ( int i = 0; i < l  && prime[i] <= sqrtn; i++ ) {
            if(n<M && sieve[n]==0 && n%2!=0)
                break;
        if ( n % prime[i] == 0 ) {
            int cnt=1;
            while ( n % prime[i] == 0 ) {
                    cnt++;
                n/=prime[i];
            }
            sum*=((amar_power(prime[i],cnt)-1)/(prime[i]-1));
            sqrtn = sqrt ( n );
        }
    }

    if(n!=1)
    {
        sum*=(n+1);
    }
    //sum=sum*p;
    //cout<<sum<<"  "<<endl;
    //rou
    //sum=sum*p;
    //cout<<"Hey "<<sum<<endl;
    return sum-temp;
}
int main()
{
    sieve(M);
    prime.push_back(2);
    int i;
    for(i=3;i<=M;i+=2)
        if(isPrime(i)==1)
            prime.push_back(i);
            llu test_cases,n;
    cin>>test_cases;
    while(test_cases--)
    {
        cin>>n;
        cout<<div_sum(n)<<endl;
    }

}
