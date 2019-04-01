#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases,i,j,n,k;
    cin>>test_cases;
    string ss;
    for(j=1;j<=test_cases;j++)
    {
        cin>>n>>k;
        cout<<"Case "<<j<<":"<<endl;
        ss="";

        for(i=0;i<n;i++)
            ss+='A'+i;
        string temp=ss;
        cout<<ss<<endl;
        --k;
        while(k--)
        {
            next_permutation(ss.begin(),ss.end());
            if(temp==ss)
                break;
            cout<<ss<<endl;
        }

    }
}
