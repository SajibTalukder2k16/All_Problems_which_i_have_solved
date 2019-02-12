#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int n;
    double inner_circle_radius,outer_circle_radius;
    cin>>n>>inner_circle_radius;
    double angle=pi/n;
    outer_circle_radius=(inner_circle_radius*sin(angle))/(1-sin(angle));
    printf("%.7f\n",outer_circle_radius);
}
