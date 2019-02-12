#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i,j,k,a,b;
    for(i=1;i<=test_cases;i++)
    {
        int n,m;
        cin>>n>>m;
        vector<int>vec;
        char check;
        for(j=0;j<n;j++)
        {
            cin>>a;
            vec.push_back(a);
        }
        for(j=0;j<m;j++)
        {
            cin>>check;
            if(check=='R')
                reverse(vec.begin(),vec.end());
            else if(check=='S')
            {
                cin>>a;
                for(k=0;k<n;k++)
                    vec[k]+=a;
            }
            else if(check=='M')
            {
                cin>>a;
                for(k=0;k<n;k++)
                    vec[k]*=a;
            }
            else if(check=='D')
            {
                cin>>a;
                for(k=0;k<n;k++)
                    vec[k]/=a;
            }
            else if(check=='P')
            {
                cin>>a>>b;
                int temp=vec[a];
                vec[a]=vec[b];
                vec[b]=temp;
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(j=0;j<n-1;j++)
            cout<<vec[j]<<" ";
        cout<<vec[j]<<endl;

    }
}
