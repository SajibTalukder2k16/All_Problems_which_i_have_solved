#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    if(a>=x && y<=(a+b-x) && z<=(a+b+c-x-y))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
