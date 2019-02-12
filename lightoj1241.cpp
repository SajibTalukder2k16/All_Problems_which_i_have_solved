#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin>>test_cases;
    int i,j;
    for(i=1;i<=test_cases;i++)
    {
        int n;
        cin>>n;
        int nose[n];
        for(j=0;j<n;j++)
            cin>>nose[j];
        int number_of_lies=ceil(double(nose[0]-2)/5.0);
        for(j=1;j<n;j++)
        {
            number_of_lies+=ceil(double(nose[j]-nose[j-1])/5.0);
        }
        cout<<"Case "<<i<<": "<<number_of_lies<<endl;

    }
}
