#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
    stack<string>backward_;
    stack<string>forward_;
    string current="http://www.lightoj.com/";
    cout<<"Case "<<i<<":"<<endl;
    while(true){
    string check;
    cin>>check;
    if(check=="QUIT")
        break;
    if(check=="VISIT")
    {
        string web;
        cin>>web;
        backward_.push(current);
        current=web;
        while(!forward_.empty())
            forward_.pop();
        cout<<current<<endl;
    }
    if(check=="BACK")
    {
        if(backward_.empty())
        {
            cout<<"Ignored"<<endl;
            continue;
        }
        forward_.push(current);
        string temp=backward_.top();
        current=temp;
        backward_.pop();
        cout<<current<<endl;
    }
    if(check=="FORWARD")
    {
        if(forward_.empty())
        {
            cout<<"Ignored"<<endl;
            continue;
        }
        backward_.push(current);
        string temp=forward_.top();
        current=temp;
        forward_.pop();
        cout<<current<<endl;

    }
    }
    }


}
