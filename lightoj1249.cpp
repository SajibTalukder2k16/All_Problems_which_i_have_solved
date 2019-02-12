#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i,j;
    for(i=1;i<=test_cases;i++)
    {
        int n;
        cin>>n;
        int mn=10000000;
        int mx=-1;
        int thief_loc=-1;
        int owner_loc=-1;
        string names[n],name;
        int volume[n];
        int h,w,l;
        for(j=0;j<n;j++)
        {
            cin>>name>>l>>w>>h;
            names[j]=name;
            volume[j]=l*w*h;
            if(volume[j]>mx)
            {
                mx=volume[j];
                thief_loc=j;
            }
            if(volume[j]<mn)
            {
                mn=volume[j];
                owner_loc=j;
            }
        }
        cout<<"Case "<<i<<": ";
        if(mx==mn)
            cout<<"no thief"<<endl;
        else
        {
            cout<<names[thief_loc]<<" took chocolate from "<<names[owner_loc]<<endl;
        }
    }
}
