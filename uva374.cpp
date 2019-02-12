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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    llu Base,Power,Mod;
    while(cin>>Base>>Power>>Mod)
        cout<<BigMod(Base,Power,Mod)<<endl;;
}
