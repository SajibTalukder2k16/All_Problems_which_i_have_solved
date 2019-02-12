#include<bits/stdc++.h>
using namespace std;
#define llu long long int
llu five_in_factorial(llu n)
{
    llu freq=0;
    llu x=n;
    while(x)
    {
        freq+=x/5;
        x/=5;
    }
    return freq;
}
llu two_in_factorial(llu n)
{
    llu freq=0;
    llu x=n;
    while(x)
    {
        freq+=x/2;
        x/=2;
    }
    return freq;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    int i;
    llu n,r,p,q;
    for(i=1;i<=test_cases;i++)
    {
    cin>>n>>r>>p>>q;
    llu n5=five_in_factorial(n);
    llu r5=five_in_factorial(r);
    llu n_r5=five_in_factorial(n-r);

    llu n2=two_in_factorial(n);
    llu r2=two_in_factorial(r);
    llu n_r2=two_in_factorial(n-r);

    llu res1=n5-r5-n_r5;
    llu res2=n2-r2-n_r2;
    llu p5=0,p2=0;

    while(p%5==0)
    {
        p/=5;
        p5++;
    }
    p5*=q;
    res1+=p5;
    while(p%2==0)
    {
        p/=2;
        p2++;
    }
    p2*=q;
    res2+=p2;

    cout<<"Case "<<i<<": "<<min(res1,res2)<<endl;
    }
}
