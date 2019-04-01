#include<bits/stdc++.h>
using namespace std;
double bin_search(double x,double y,double c)
{
    double low=0,high=min(x,y),mid,h1,h2,h;
    int count=40;
    while(count--)
    {
        mid=(low+high)/2.0;
        h1=sqrt((y*y)-(mid*mid));
        h2=sqrt((x*x)-(mid*mid));
        h=(h1*h2)/(h1+h2);
        //cout<<h<<" "<<mid<<endl;
        if(h>=c)
            low=mid;
        else
            high=mid;

    }
    return mid;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases,i;
    //cin>>test_cases;
    double x,y,c,d;
    //for(i=1;i<=test_cases;i++)
    //{
        while(cin>>x>>y>>c)
        {
        d=bin_search(x,y,c);
        printf("%.3f\n",d);
        }
    //}
}
