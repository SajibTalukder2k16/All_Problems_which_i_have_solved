#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n;
    cin>>n;
    int i,number;
    vector<int>increase,decrease;
    for(i=0;i<n;i++)
    {
        cin>>number;
        if(mp[number]==0)
        {
            mp[number]=1;
            increase.push_back(number);
        }
        else if(mp[number]==1)
        {
            decrease.push_back(number);
            mp[number]=2;
        }
        else if(mp[number]==2)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    sort(increase.begin(),increase.end());
    sort(decrease.rbegin(),decrease.rend());
    int increase_len=increase.size();
    int decrease_len=decrease.size();
    cout<<increase_len<<endl;
    for(i=0;i<increase_len;i++)
        cout<<increase[i]<<" ";
    cout<<endl;
    cout<<decrease_len<<endl;
    for(i=0;i<decrease_len;i++)
        cout<<decrease[i]<<" ";
    cout<<endl;
}
