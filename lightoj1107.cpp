#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int j;
    for(j=1;j<=test_cases;j++)
    {
    int x1,y1,x2,y2,p1x,p1y;;
    cin>>x1>>y1>>x2>>y2;
    int n;
    cin>>n;
    int i;
    cout<<"Case "<<j<<":"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>p1x>>p1y;
        if((x1<p1x)&&(p1x<x2)&&(y1<p1y)&&(p1y<y2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    }
}
