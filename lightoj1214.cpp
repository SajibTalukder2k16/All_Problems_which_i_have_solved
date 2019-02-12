#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i,j;
    for(i=1;i<=test_cases;i++)
    {
        string dividend;
        long long divisor;
        cin>>dividend>>divisor;
        if(divisor<0)
            divisor=-divisor;
        int len=dividend.length();
        long long temp=0;
        for(j=0;j<len;j++)
        {
            if(dividend[j]=='-')
                continue;
            temp=temp*10+(dividend[j]-48);
            temp=temp%divisor;
        }
        if(temp==0)
            cout<<"Case "<<i<<": "<<"divisible"<<endl;
        else
            cout<<"Case "<<i<<": "<<"not divisible"<<endl;

    }
}
