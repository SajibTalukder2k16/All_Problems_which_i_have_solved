#include<bits/stdc++.h>
using namespace std;
#define llu long long int
bool pallindrome(llu number)
{
    int len=0;
    llu temp=number;
    while(temp>0)
    {
        temp/=10;
        len++;
    }
    ///cout<<len<<endl;
    double divisor=pow(10,(len-1));
    ///cout<<divisor<<endl;
    int n;
    if(len%2==1)
        n=(len/2)+1;
    else
        n=len/2;
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        int temp1=number/divisor;
        int temp2=number%10;
        temp1=temp1%10;
        ///cout<<temp1<<" "<<temp2<<endl;
        if(temp1==temp2)
            count++;
        else
            break;
        number/=10;
        divisor/=100;
    }
    if(count==n)
        return true;
    else
        return false;

}
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        llu a;
        cin>>a;
        if(pallindrome(a)==true)
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<i<<": "<<"No"<<endl;
    }
}
