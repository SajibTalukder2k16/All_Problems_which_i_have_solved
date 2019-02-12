#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    double radius;
    cin>>radius;
    double side=2*radius;
    double area_of_circle=pi*radius*radius;
    double area_of_square=side*side;
    double area_to_calculate=area_of_square-area_of_circle;
    cout<<"Case "<<i<<": ";
    printf("%.2f\n",area_to_calculate);
    }
}
