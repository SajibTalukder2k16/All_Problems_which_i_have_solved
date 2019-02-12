#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }
}
