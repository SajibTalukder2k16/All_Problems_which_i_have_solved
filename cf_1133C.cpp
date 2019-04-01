#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int mx=1,temp=1;
    j=0;
    for(i=0;i<n;)
    {
        if(ara[i]-ara[j]<=5)
        {
            mx=max(mx,i-j+1);
            i++;
        }
        else
            j++;
    }
    cout<<mx<<endl;
}
