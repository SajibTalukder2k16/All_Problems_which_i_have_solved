#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i;
    for(i=0;i<n;i++)
        cin>>ara[i];
    int count=0;
    int maxx=0;
    if(ara[n-1]==n)
    {
        cout<<n-1<<endl;
        return 0;
    }
    if(n>=2)
        if(ara[0]==1 && ara[1]==2)
            maxx=1;
        if(ara[0]==999 && ara[1]==1000)
            maxx=1;
    for(i=1;i<(n-1);i++)
    {
        if(ara[i]==ara[i-1]+1 && ara[i]==ara[i+1]-1)
            {
                count++;
                ///cout<<ara[i-1]<<" "<<ara[i]<<" "<<ara[i+1]<<endl;
            }
        else
        {
            if(maxx<=count)
            {
                ///cout<<maxx<<" "<<count<<endl;
                maxx=count;
                //cout<<i<<" "<<count<<endl;
                if(ara[i-(count+1)]==1 && ara[i-(count+2)]==2)
                    maxx++;
                if(ara[i+1]==1000 && ara[i]==999)
                    maxx++;

            }
            count=0;
        }
        ///cout<<count<<endl;
    }
    /*if(ara[n-1]==1000 && ara[n-2]==999)
        count++;
    if(ara[0]==1 && ara[1]==2)
        count++;*/
    if(maxx<=count)
        {
            maxx=count;
            ///cout<<i<<" "<<count<<endl;
            if(ara[i]==1000 && ara[i-1]==999)
                maxx++;
            if(ara[i-(count+2)]==1&& ara[i-(count+3)]==2)
                    maxx++;
            count=0;
            ///cout<<"updated"<<endl;
        }
    cout<<maxx<<endl;
}
