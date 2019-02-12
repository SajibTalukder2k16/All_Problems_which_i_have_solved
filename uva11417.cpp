#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            return 0;
        int i,j;
        int g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g+=__gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
}
