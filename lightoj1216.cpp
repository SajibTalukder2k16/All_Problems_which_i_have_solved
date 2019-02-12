#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
    int r1,r2,h,p;
    cin>>r1>>r2>>h>>p;
    double rx=(double(r1-r2)/(double)(h))*(double)(p);
    rx+=r2;
    //cout<<rx<<endl;
    double volume=(pi/3.0)*p*((r2*r2)+(rx*rx)+(r2*rx));
    cout<<"Case "<<i<<": ";
    printf("%.6f\n",volume);
    ///cout<<volume<<endl;
    }
}
