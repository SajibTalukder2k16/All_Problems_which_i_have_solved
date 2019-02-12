#include<bits/stdc++.h>
using namespace std;
#define llu long long int
llu BigMod(llu B,llu P,llu M)
{
    if(P==0)
        return 1;
    llu x=BigMod(B,P/2,M);
    x=(x*x)%M;
    if(P&1)
        x=(x*B)%M;
    return x;

}
llu Calculate(llu n,llu digit)
{
    llu i=1;
    llu rem=digit%n;
    while(rem)
    {
        rem=rem*10+digit;
        if(rem>=n)
            rem%=n;
        i++;
    }

    return i;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j;
    llu fact=0;
    llu n;
    int digit;
    int test_cases;
    cin>>test_cases;
    for(j=1;j<=test_cases;j++)
    {
    cin>>n>>digit;

    /**for(i=0;;i++)
    {
        fact=((fact%n)+((digit%n)*BigMod(10,i,n)%n)%n)%n;
        //cout<<digit*BigMod(10,i,n)<<" "<<fact<<endl;
        //fact=(fact+digit*BigMod(10,i,n))%n;
        if(fact==0)
           {cout<<"Case "<<j<<": "<<i+1<<endl;
           break;}
    }**/
    cout<<"Case "<<j<<": "<<Calculate(n,digit)<<endl;
    }
}

