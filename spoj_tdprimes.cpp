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
int main()
{
    sieve(M);
    prime.push_back(2);
    int i;
    for(i=3;i<=M;i+=2)
        if(isPrime(i)==1)
            prime.push_back(i);
    int sz=prime.size();
    for(i=0;i<sz;i+=100)
        cout<<prime[i]<<endl;
}
