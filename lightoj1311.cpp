#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
    double v1,v2,v3,a1,a2,t1,t2,d,s1,s2,birds_distance;
    cin>>v1>>v2>>v3>>a1>>a2;
    t1=v1/a1;
    t2=v2/a2;
    s1=(t1*v1)-(.5*a1*t1*t1);
    s2=(t2*v2)-(.5*a2*t2*t2);
    d=s1+s2;
    birds_distance=(max(t1,t2))*v3;
    cout<<"Case "<<i<<": ";
    printf("%.6f %.6f\n",d,birds_distance);
    }


}
