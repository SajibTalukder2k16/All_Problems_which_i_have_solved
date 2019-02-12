#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases,count=1;
    cin>>cases;
    while(cases--)
    {
        int a,b;
        cin>>a>>b;
        int i;
        int sum=0;
        for(i=a;i<=b;i++)
        {
            if(i%2==1)
                sum+=i;
        }
        cout<<"Case "<<count++<<": "<<sum<<endl;

    }
}
