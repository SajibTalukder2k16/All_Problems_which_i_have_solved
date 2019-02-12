#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        int n,i;
        cin>>n;
        string number;
        cin>>number;
        if(n==2)
        {
            if(number[0]<number[1])
            {
                cout<<"YES"<<endl<<2<<endl;
                cout<<number[0]<<" "<<number[1]<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl<<2<<endl;
            cout<<number[0]<<" ";
            for(i=1;i<n;i++)
                cout<<number[i];
            cout<<endl;
        }

    }
}
