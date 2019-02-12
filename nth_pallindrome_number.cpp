#include<bits/stdc++.h>
using namespace std;
vector<int>pall;
bool pallindrome(int number);
void pallidrome_store()
{
    int i;
    for(i=1;i<=100000000;i++)
    {
        if(pallindrome(i)==true)
            pall.push_back(i);
    }
}
bool pallindrome(int number)
{
    int len=0;
    int temp=number;
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
    pallidrome_store();
    int n,i;
    ///cin>>100;
    for(i=0;i<pall.size();i++)
        cout<<pall[i]<<endl;
    ///cout<<pall.size()<<endl;
    ///cout<<pall[n]<<endl;
}
