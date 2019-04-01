#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>odd,even;
    int i,number;
    for(i=0;i<n;i++)
    {
        cin>>number;
        if(number&1)
            odd.push_back(number);
        else
            even.push_back(number);
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    int even_len=even.size();
    int odd_len=odd.size();
    int mn=min(even_len,odd_len);
    int sum=0;
    /*if(even_len==n)
    {
        for(i=1;i<n;i++)
            sum+=even[i];
        cout<<sum<<endl;
        return 0;
    }
    if(odd_len==n)
    {
        for(i=1;i<n;i++)
            sum+=odd[i];
        cout<<sum<<endl;
        return 0;
    }*/
    if(even_len>mn)
    {
        for(i=mn+1;i<even_len;i++)
            sum+=even[i];
        cout<<sum<<endl;
        return 0;
    }
    else if(odd_len>mn)
    {
        for(i=mn+1;i<odd_len;i++)
            sum+=odd[i];
        cout<<sum<<endl;
        return 0;
    }
    cout<<sum<<endl;
}
