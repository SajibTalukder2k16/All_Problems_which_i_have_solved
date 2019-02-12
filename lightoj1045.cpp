#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
double logvalue[mx];
int main()
{
    int test_cases;
    cin>>test_cases;
    int i,j;
    logvalue[0]=0;
    for(i=1;i<=mx;i++)
    {
        logvalue[i]=logvalue[i-1]+log(i);
    }
    int number,base;
    for(i=1;i<=test_cases;i++)
    {
        cin>>number>>base;
        double digit=logvalue[number]/log(base);
        digit=ceil(digit);
        if(number==0)
            digit=1;
        printf("Case %d: %.0f\n",i,digit);
    }
}
