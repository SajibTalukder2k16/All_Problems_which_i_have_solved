#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int i,n;
    cin>>n;
    int cnt=0;
    for(i=n/2;i>0;i--)
    {
        int sqrtn=sqrt(n);
        if(sqrtn*sqrtn==n)
        {
            n=sqrtn;
            cnt++;
            i=n/2;
        }
        else
        {
            int p=n*i;
            int x=sqrt(p);
            cout<<n<<" "<<i<<" "<<p<<endl;
            if(x*x==p)
            {
                n=x;
                cnt+=2;;
                i=n/2;
            }
        }
    }
    cout<<n<<" "<<cnt<<endl;
}
