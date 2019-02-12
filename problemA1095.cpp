#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p;
    if(n==1)
        p=1;
    else if(n==3)
        p=2;
    else if(n==6)
        p=3;
    else if(n==10)
        p=4;
    else if(n==15)
        p=5;
    else if(n==21)
        p=6;
    else if(n==28)
        p=7;
    else if(n==36)
        p=8;
    else if(n==45)
        p=9;
    else if(n==55)
        p=10;
    int i,j;
    string a="";
    for(i=0,j=1;i<n;i+=j,j++)
    {
        a+=s[i];
    }
    cout<<a<<endl;
}
