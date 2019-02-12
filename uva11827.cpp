#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
    string s;
    getline(cin,s);
    stringstream ss(s);
    int x;
    vector<int>vec;
    while(ss>>x)
        vec.push_back(x);
    int len = vec.size();
    int i,j;
    int mx=0;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            int a=max(vec[i],vec[j]);
            int b=min(vec[i],vec[j]);
            int g=__gcd(a,b);
            if(mx<g)
                mx=g;
        }
    }
    cout<<mx<<endl;
    }
}
