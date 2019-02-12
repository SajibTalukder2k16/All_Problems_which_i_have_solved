#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    getchar();
    int i;
    for(i=1;i<=T;i++)
    {
        string line;
        getline(cin,line);
        stringstream ss(line);
        int mx=0;
        int p;
        while(ss>>p)
        {
            if(p>mx)
                mx=p;
        }
        cout<<"Case "<<i<<": "<<mx<<endl;
    }
}
