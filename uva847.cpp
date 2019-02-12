#include<bits/stdc++.h>
using namespace std;
#define llu long long int
bool can_win(llu n,llu x)
{
   // cout<<n<<endl;
    if(n>=x)
        return true;;
    if(can_win(n*2,x)==1||can_win(n*3,x)==1||can_win(n*4,x)==1||can_win(n*5,x)==1||can_win(n*6,x)==1||can_win(n*7,x)==1||can_win(n*8,x)==1||can_win(n*9,x)==1)
        return false;
    return true;
}
int main()
{
    cout<<can_win(1,162)<<endl;
    cout<<can_win(1,17)<<endl;
    cout<<can_win(1,34012226)<<endl;
    cout<<can_win(1,4294967295)<<endl;
}
