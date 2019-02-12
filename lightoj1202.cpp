#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases,i;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int p1=abs(x1-x2);
        int p2=abs(y1-y2);
        if(p1==p2)
        {
            cout<<"Case "<<i<<": "<<1<<endl;
        }
        else if(p1%2==p2%2)
        {
            cout<<"Case "<<i<<": "<<2<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
    }
}
