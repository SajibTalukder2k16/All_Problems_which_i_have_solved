#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    int i,j;
    string check;
    int x;
    for(i=1;i<=test_cases;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        int n,m;
        cin>>n>>m;
        deque<int>dq;
        for(j=0;j<m;j++)
        {
            cin>>check;
            if(check=="pushLeft")
            {
                cin>>x;
                if(dq.size()>=n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_back(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }
            else if(check=="pushRight")
            {
                cin>>x;
                if(dq.size()>=n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    dq.push_front(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            else if(check=="popLeft")
            {
                if(dq.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    int temp=dq.back();
                    dq.pop_back();
                    cout<<"Popped from left: "<<temp<<endl;
                }
            }
            else if(check=="popRight")
            {
                if(dq.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    int temp=dq.front();
                    dq.pop_front();
                    cout<<"Popped from right: "<<temp<<endl;
                }
            }
        }
    }
}
