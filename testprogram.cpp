/*
** id :template
** author : swap_coder
** time:
*/


#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <cstdlib>
#include <stack>
using namespace std;

#define fi(i,a,b) for(int i=(int)a;i<=(int)b;i++)
#define fd(i,a,b) for(int i=(int)a;i>=(int)b;i--)
#define rep(i,n)  for(int i=0;i<n;i++)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define INF (1<<29)
#define EPS 1e-9
#define PI acos(-1.0)
//stl
 #define sz(a) int((a).size())
 #define pb push_back
 #define all(c) ((c).begin(),(c).end())
 #define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 #define present(c,x) ((c).find(x) != (c).end())
 #define cpresent(c,x) (find(all(c),x) != (c).end())
 #define pf printf
 #define sf scanf


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii>    vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef map<string,int> msi;

ll gcd(ll a,ll b)
{
    if(a<b) {ll temp=a;a=b;b=temp;}
    if(b==0) return a;
    else return gcd(b,a%b);

}
ll lcm(int a,ll b)
{
    ll temp=a/gcd(a,b);
    return temp*b;
}


int main()
{
    int n;
    cout<<"Goldbach's conjecture is wrong."<<endl;
    //store divisdors
    while(1)
    {
        cin>>n;
        if(!n) break;
        vi divisor;
        int temp=sqrt(n);
        fi(i,1,temp)
        {
            if(n%i==0)
            {
                divisor.pb(i);
                if(i!=n/i) divisor.pb(n/i);
            }

        }
        int ans=0;
        rep(i,sz(divisor))
            fi(j,i,sz(divisor)-1)
                if(lcm(divisor[i],divisor[j])==n)
                    ans++;

        cout<<n<<" " <<ans<<endl;
    }

  return 0;
}
