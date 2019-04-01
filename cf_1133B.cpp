#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ara[k+1]={0};
    int i,j;
    int value;
    for(i=0;i<n;i++)
    {
        cin>>value;
        ++ara[value%k];
    }
    int ans=ara[0]/2;
    int mn;
    for(i=1;i<k;i++)
    {
        for(j=i;j<k;j++)
        {
            if((i+j)==k)
            {
                if(i==j)
                {
                    ans+=ara[i]/2;
                    break;
                }
                else
                {
                    mn=min(ara[i],ara[j]);
                    ans+=mn;
                    break;
                }
            }
        }
    }
    cout<<ans*2<<endl;
}
