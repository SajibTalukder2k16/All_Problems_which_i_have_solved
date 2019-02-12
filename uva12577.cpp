#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=1;
    string check;
    while(cin>>check)
    {
        if(check=="*")
            return 0;
        if(check=="Hajj")
            cout<<"Case "<<count<<": "<<"Hajj-e-Akbar"<<endl;
        else if(check=="Umrah")
            cout<<"Case "<<count<<": "<<"Hajj-e-Asghar"<<endl;
        count++;
    }
}
