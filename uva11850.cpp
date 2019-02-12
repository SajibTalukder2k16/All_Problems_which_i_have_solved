#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        int i;
        int station[n];
        for(i=0;i<n;i++)
            cin>>station[i];
        sort(station,station+n);
        int check=1;
        for(i=1;i<n;i++)
        {
            if(station[i]-station[i-1]>200)
            {
                check=0;
                break;
            }
        }
        if(station[0]-0>200)
            check=0;
        if(2*(1422-station[n-1])>200)
            check=0;
        if(check==0)
            cout<<"IMPOSSIBLE"<<endl;
        else if(check==1)
            cout<<"POSSIBLE"<<endl;
    }
}
