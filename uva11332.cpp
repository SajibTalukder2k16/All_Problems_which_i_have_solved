#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int foo(llu num)
{
    if(num>=1 && num<=9)
        return num;
    llu sum=0;
    while(num)
    {
        sum+=(num%10);
        num/=10;
    }
    return foo(sum);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    llu num;
    while(true)
    {
        cin>>num;
        if(num==0)
            return 0;
        cout<<foo(num)<<endl;
    }
}
