#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int n,m,k,i,j;
    cin>>n>>m>>k;
    int mk=m*k;
    map<int,int>mp;
    vector<int>ara,b_ara;
    for(i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ara.push_back(a);
            b_ara.push_back(a);
        }
    sort(b_ara.begin(),b_ara.end());
    reverse(b_ara.begin(),b_ara.end());
    llu sum=0;

    for(i=0;i<mk;i++)
        {
            sum+=b_ara[i];
            mp[b_ara[i]]++;
        }
    cout<<sum<<endl;
    int cnt=0,check=0;;
    for(i=0;i<n;i++)
    {
        if(check==k-1)
            break;
        if(mp[ara[i]])
        {
            cnt++;
            mp[ara[i]]--;
            if(cnt>=m)
                {
                    cout<<i+1<<" ";
                    check++;
                    cnt=0;
                }

        }
    }




}
