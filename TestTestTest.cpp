#include<bits/stdc++.h>
using namespace std;
class divisors
{
public:
    int number=0,its_divisor=0;
};

class functor
{
public:
    bool operator()(divisors const &a,divisors const &b)
    {
        if(a.its_divisor==b.its_divisor)
             return a.its_divisor>b.its_divisor;
        else if(a.its_divisor<b.its_divisor)
             return a.its_divisor<b.its_divisor;
        //else if(a.its_divisor>b.its_divisor)
             //return a.its_divisor<b.its_divisor;
    }
};
int main()
{
    int i,j,position;
    int n=1001;
    divisors no_of_divisors[n+1];
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            //int p=no_of_divisors[j].number;
            //int q=no_of_divisors[j].its_divisor;
            no_of_divisors[j].number=j;
            no_of_divisors[j].its_divisor++;
        }

    }
    //bubbleSort(no_of_divisors,n);
    sort(no_of_divisors,no_of_divisors+n,functor());
    for(i=0;i<n;i++)
    {
        int p=no_of_divisors[i].number;
        int q=no_of_divisors[i].its_divisor;
        cout<<p<<" "<<q<<endl;
    }

    int test_cases;
    cin>>test_cases;
    for(i=1;i<=test_cases;i++)
    {
        cin>>position;
        int p=no_of_divisors[position-1].number;
        cout<<"Case "<<i<<": "<<p<<endl;
    }

}
