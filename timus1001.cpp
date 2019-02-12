#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
double root_ara[(256*1024)/(2*8)];
int main()
{
    llu a;
    double root;
    int i=0;
    while(scanf("%llu",&a)!=EOF)
    {
        ///cin>>a;
        root=(double)sqrt(a*1.0);
        root_ara[i++]=root;
        ///printf("%.4f\n",root);
        ///cout<<root<<endl;
        cout<<i<<endl;
    }
    for(i=i-1;i>=0;i--)
        printf("%.4f\n",root_ara[i]);
}
