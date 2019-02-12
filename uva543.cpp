#include<bits/stdc++.h>
using namespace std;

#define M 1000000
bool marked[M];

bool isPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  return marked[n] == false;
}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j += i + i) {
        marked[j] = true;
      }
    }
  }
}
vector<int> primes;
int main()
{
    sieve(M);
    int i,j;
    for(i=3;i<=M;i++)
    {
        if(isPrime(i)==1){
            primes.push_back(i);
            ///cout<<i<<endl;
        }
    }
    while(true)
    {

    int a=0,b=0;
    int mx=0;
    int n;
    cin>>n;
    if(n==0)
        return 0;
    int count=0;
    int p=0;
    for(i=0;(i<primes.size() && primes[i]<n);i++)
    {
        for(j=i;(j<primes.size() && (primes[i]+primes[j])<=n);j++)
        {
            if(primes[i]+primes[j]==n)
                {
                    a=primes[i];
                    b=primes[j];
                    cout<<n<<" = "<<a<<" + "<<b<<endl;
                    p=1;
                    break;
                    /**int temp=primes[j]-primes[i];
                    if(temp>mx)
                    {
                        mx=temp;

                    }**/
                }
        }
        if(p==1)
            break;
    }
    if(a==0 && b==0)
        cout<<"Goldbach's conjecture is wrong."<<endl;
    /**else
        cout<<n<<" = "<<a<<" + "<<b<<endl;**/
    }

}
