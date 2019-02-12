#include<bits/stdc++.h>
using namespace std;
#define llu long long int
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
    llu s,row,column;
    cin>>s;
    llu x=ceil(sqrt(s));
    llu y=s-(x-1)*(x-1);
    if(x&1)
    {
        if(x>y)
        {
             row=y;
             column=x;
        }
        else
        {
            column=1+(x*x)-s;;
            row=x;
        }
        cout<<"Case "<<i<<": "<<column<<" "<<row<<endl;
    }
    else
    {
        if(x>y)
        {
            column=y;
            row=x;
        }
        else
        {
            column=x;
            row=1+(x*x)-s;
        }
        cout<<"Case "<<i<<": "<<column<<" "<<row<<endl;
    }
    }


}
