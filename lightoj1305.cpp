#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
    int ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    dx=(ax+cx)-bx;
    dy=(ay+cy)-by;
    long long int area=abs(((ax*by+bx*cy+cx*dy+dx*ay)-(ay*bx+by*cx+cy*dx+dy*ax))/2);
    cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }
}
