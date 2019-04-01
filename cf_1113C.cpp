#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int n;
    cin>>n;
    int i;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int left[n];
    left[0]=ara[0];
    for(i=1;i<n;i++)
        left[i]=left[i-1]^ara[i];
    int right[n];
    right[n-1]=ara[n-1];
    for(i=n-2;i>=0;i--)
        right[i]=right[i+1]^ara[i];
    //for(i=0;i<n;i++)
        //cout<<left[i]<<"\t"<<right[i]<<endl;
    int l,r,mid,cnt=0;
    for(l=0;l<n;l++)
    {
        for(r=l;r<n;r++)
        {
            if((r-l+1)%2==0)
            {
                mid=(r+l-1)/2;
                if(left[mid-1]==right[mid])
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}
