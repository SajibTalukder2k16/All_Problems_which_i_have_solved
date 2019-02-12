#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double x=(d*d-b*b+a*a+c*c-2*a*c)/(2*a-2*c);
        double h=sqrt(d*d-x*x);
        double area=.5*(a+c)*h;
        printf("Case %d: %.7f\n",i,area);
    }
}
