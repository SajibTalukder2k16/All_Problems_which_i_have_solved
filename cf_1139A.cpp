#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i,sum=0;
    for(i=0;i<str.length();i++)
    {
         if((str[i]-'0')%2==0)
            sum+=i+1;
    }
    cout<<sum<<endl;

}
