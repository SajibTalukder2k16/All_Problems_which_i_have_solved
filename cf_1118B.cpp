#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp;
    cin>>n;
    int ara[n+1];
    int odd[n+1],even[n+1];
    odd[0]=0,even[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        if(i%2==1)
        {
            odd[i]=odd[i-1];
            odd[i]+=ara[i];
            even[i]=even[i-1];
        }
        else
        {
            even[i]=even[i-1];
            even[i]+=ara[i];
            odd[i]=odd[i-1];

        }

    }
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        int sum1=0,sum2=0;
        if(i%2==1)
        {
            sum1+=odd[i-1];
            sum1+=even[n]-even[i];
            sum2+=even[i-1];
            //cout<<sum2<<endl;
            sum2+=odd[n]-odd[i];
        }
        else
        {
            sum1+=even[i-1];
            sum1+=odd[n]-odd[i];
            sum2+=odd[i-1];
            sum2+=even[n]-even[i];
        }
        //cout<<i<<" "<<sum1<<" "<<sum2<<endl;
        if(sum1==sum2)
            cnt++;
    }
    cout<<cnt<<endl;

}
