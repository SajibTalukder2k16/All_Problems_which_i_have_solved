#include<bits/stdc++.h>
using namespace std;
int dec_to_bin(int num)
{
    int rem,base=1,new_num=0;
    while(num>0)
    {
        rem=num%2;
        new_num=new_num+rem*base;
        num=num/2;
        base=base*10;
    }
    return new_num;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    int i;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        string dec;
        cin>>dec;
        int len=dec.length();
        int j;
        int a=0,b=0,c=0,d=0;
        for(j=0;j<len;j++)
        {
            if(dec[j]=='.')
                break;
            a=a*10+(dec[j]-48);
        }
        j++;
        for(;j<len;j++)
        {
            if(dec[j]=='.')
                break;
            b=b*10+(dec[j]-48);
        }
        j++;
        for(;j<len;j++)
        {
            if(dec[j]=='.')
                break;
            c=c*10+(dec[j]-48);
        }
        j++;
        for(;j<len;j++)
        {
            if(dec[j]=='.')
                break;
            d=d*10+(dec[j]-48);
        }
        string bin;
        cin>>bin;
        int p=0,q=0,r=0,s=0;
        len=bin.length();
        for(j=0;j<len;j++)
        {
            if(bin[j]=='.')
                break;
            p=p*10+(bin[j]-48);
        }
        j++;
        for(;j<len;j++)
        {
            if(bin[j]=='.')
                break;
            q=q*10+(bin[j]-48);
        }
        j++;
        for(;j<len;j++)
        {
            if(bin[j]=='.')
                break;
            r=r*10+(bin[j]-48);
        }
        j++;
        for(;j<len;j++)
        {
            if(bin[j]=='.')
                break;
            s=s*10+(bin[j]-48);
        }
        int num1=dec_to_bin(a);
        int num2=dec_to_bin(b);
        int num3=dec_to_bin(c);
        int num4=dec_to_bin(d);
        if(num1==p && num2==q && num3==r && num4==s)
        {
            cout<<"Case "<<i<<": "<<"Yes"<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<"No"<<endl;
        //cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        //cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;


    }
}
