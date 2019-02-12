#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        int j;
        int n,p,q;
        cin>>n>>p>>q;
        int weight[n];
        for(j=0;j<n;j++)
            cin>>weight[j];
        int sum=0;
        int count=0;
        for(j=0;j<n;j++)
        {
            if(sum+weight[j]<=q && p>count)
            {
                sum+=weight[j];
                count++;
            }
        }
        cout<<"Case "<<i<<": "<<count<<endl;

    }
}
