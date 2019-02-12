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
    double r1,r2,r3;
    cin>>r1>>r2>>r3;
    double a=r1+r2;
    double b=r2+r3;
    double c=r3+r1;
    double s=(a+b+c)/2;///perimeter
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    double area1=.5*r1*r1*acos((c*c+a*a-b*b)/(2*c*a));
    double area2=.5*r2*r2*acos((b*b+a*a-c*c)/(2*a*b));
    double area3=.5*r3*r3*acos((c*c+b*b-a*a)/(2*b*c));
    ///cout<<acos(pi/180*(c*c+a*a-b*b)/(2*c*a))<<" "<<acos(pi/180*(b*b+a*a-c*c)/(2*a*b))<<" "<<acos(pi/180*(c*c+b*b-a*a)/(2*b*c))<<endl;
    cout<<"Case "<<i<<": ";
    printf("%.6f\n",area-(area1+area2+area3));
    }
}
