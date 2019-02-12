#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,b;
    cin>>n>>k;
    int tabs[n+1];
    int i,test=0,social=0;
    for(i=1;i<=n;i++)
    {
        cin>>tabs[i];
        if(tabs[i]==1)
            test++;
        else if(tabs[i]==-1)
            social++;
    }
    int c,x,y;
    int mx=-1;
    for(b=1;b<=n;b++)
    {
        x=0;
        y=0;
        for(i=b+k;i<=n;i+=k)
        {
            if(tabs[i]==1)
            {
                x++;
            }
            else if(tabs[i]==-1)
            {
                y++;
            }

        }
        for(i=b;i>=1;i-=k)
        {
            if(tabs[i]==1)
                {
                    x++;
                }
            else if(tabs[i]==-1)
            {
                y++;
            }

        }
        int p=abs((test-x)-(social-y));
        x=0;
        y=0;
        //cout<<p<<endl;
        mx=max(mx,p);
    }
    cout<<mx<<endl;
}
