#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i,j,x,temp;
    llu sum=0;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n);
    llu minn=sum;
    for(i=1;i<n;i++)
    {
        for(j=2;j<=ara[i];j++)
        {
            if(ara[i]%j==0)
            {
                x=ara[i]/j;

                temp=sum-ara[i]+x;
                //cout<<temp<<endl;
                temp-=ara[0];
                temp+=ara[0]*j;
                //cout<<temp<<endl;
                //cout<<ara[i]<<" "<<j<<" "<<x<<" "<<temp<<endl;
                //cout<<j<<" "<<ara[0]*j<<" "<<ara[i]<<" "<<x<<" "<<temp<<endl;
                if(minn>temp)
                    minn=temp;
            }
            //cout<<endl;
        }
    }
    cout<<minn<<endl;
}
