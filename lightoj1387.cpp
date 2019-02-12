#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases,i;
    cin>>cases;
    for(i=1;i<=cases;i++)
    {
    int T;
    cin>>T;
    int fund=0;
    int donation;
    string check;
    cout<<"Case "<<i<<":"<<endl;
    while(T--)
    {
        cin>>check;
        if(check=="donate")
        {
            cin>>donation;
            fund+=donation;
        }
        else if(check=="report")
            cout<<fund<<endl;
    }
    }

}

