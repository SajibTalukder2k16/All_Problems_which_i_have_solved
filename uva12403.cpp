#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int fund=0;
    int donation;
    string check;
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
