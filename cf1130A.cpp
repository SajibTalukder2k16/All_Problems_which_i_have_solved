#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i;
    int zero=0,positive=0,negative=0;
    int half=n/2;
    if(n&1)
        half++;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>0)
            positive++;
        else if(ara[i]==0)
            zero++;
        else
            negative++;
    }
    if(positive>=half)
        cout<<1<<endl;
    else if(negative>=half)
        cout<<-1<<endl;
    else
        cout<<0<<endl;

}
