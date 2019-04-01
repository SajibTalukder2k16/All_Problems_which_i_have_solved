#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    while(n--)
    {
    string name;
    cin>>name;
    int len=name.length();
    //cout<<len<<endl;
    char ara[len+1];
    int i;
    for(i=0;i<len;i++)
        ara[i]=name[i];
    ara[i]='\n';
    sort(ara,ara+len);
    for(i=1;i<len;i++)
    {

        if(ara[i]-ara[i-1]>1 || ara[i]==ara[i-1])
        {
            cout<<"No"<<endl;
            break;
        }
    }
    if(i==len)
    {
        cout<<"Yes"<<endl;
    }
    }
}
