#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    cin>>h1;
    getchar();
    cin>>m1;
    cin>>h2;
    getchar();
    cin>>m2;
    if(m1>m2)
    {
        m2+=60;
        h2--;
    }
    int time1=h1*60+m1;
    int time2=h2*60+m2;
    int dif=(time2-time1)/2;
    int time=time1+dif;
    int hour=time/60;
    int minute=time%60;
    if(hour<10)
        cout<<0;
    cout<<hour<<":";
    if(minute<10)
        cout<<0;
    cout<<minute<<endl;
}
