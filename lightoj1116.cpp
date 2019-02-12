#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
int main()
{
    int i,test_cases;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
    llu w,k;
    cin>>w;
    if(w%2==1)
        cout<<"Case "<<i<<": "<<"Impossible"<<endl;
    else
    {
        for(k=2;;k+=2)
        {
            if(w%k==0)
            if((w/k)%2==1){
                cout<<"Case "<<i<<": "<<w/k<<" "<<k<<endl;
                break;}
        }
    }
    }
}
