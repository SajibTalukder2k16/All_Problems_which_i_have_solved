#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    int i,sum=0,oil=0,temp;
    for(i=1;i<n;i++)
    {
        if(v>oil)
            if((oil+i-1)<(n-1))
            {
                //int road=n-i
                temp=min(v-oil,n-i);
                oil+=temp;
                //cout<<temp<<endl;
                sum+=temp*i;
            }
            oil--;
    }
    cout<<sum<<endl;

}
