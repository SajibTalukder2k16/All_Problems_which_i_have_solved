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
vector<int> primes; // we'll preload primes once at the beginning
int countPrimeDivisor(int n) {
  int divisor = 0;
  for (int i = 0; i < primes.size(); i++) {
    if (n % primes[i] == 0) {
      while (n % primes[i] == 0) {
        n /= primes[i];
      }

      divisor++;
    }
  }
  return divisor;
}
int main()
{
    sieve(M);
    int i;
    for(i=2;i<=M;i++)
    {
        if(isPrime(i)==1)
            primes.push_back(i);
    }
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)
            return 0;
        cout<<n<<" : "<<countPrimeDivisor(n)<<endl;
    }
}

