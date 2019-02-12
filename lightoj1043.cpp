#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i;
    for(i=1;i<=test_cases;i++)
    {
        double AB,AC,BC,ratio;
        cin>>AB>>AC>>BC>>ratio;
        double DE=sqrt((BC*BC)/(1+(1/ratio)));
        double AD=(AB*DE)/BC;
        printf("Case %d: %.8f\n",i,AD);
    }
}
