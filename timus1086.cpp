#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool marked[M];
vector<int>prime;

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
int main()
{
    sieve(M);
    int i;
    for(i=2;i<=M;i++)
    {
        if(isPrime(i))
            prime.push_back(i);

    }
    int n,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cout<<prime[a-1]<<endl;
    }
}
