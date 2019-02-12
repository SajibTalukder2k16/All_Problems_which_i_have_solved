#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int G,L;
        cin>>G>>L;
        if(L%G!=0)
            cout<<-1<<endl;
        else
            cout<<G<<" "<<L<<endl;
    }
}
