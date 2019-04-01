#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,base,power;
    cin>>base>>power;
    int ara[power];
    for(i=0;i<power;i++)
        cin>>ara[i];
    base=base%10;
    int sum=ara[power-1];
    int num,temp=1;;
    for(i=power-2;i>=0;i--)
    {
        num=ara[i]%10;
        temp*=base;
        temp%=10;
        num*=temp;
        num%=10;
        sum+=num;
        sum%=10;
    }
    if(sum&1)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
}
