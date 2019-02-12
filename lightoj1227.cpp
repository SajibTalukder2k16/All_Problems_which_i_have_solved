#include<bits/stdc++.h>
using namespace std;
int weight[100];
int n,capacity,no_of_max_item;
int knapsack(int i,int w,int items)
{
    int profit1,profit2;
    if(i==n)
        return 0;
    if((weight[i]+w)<=capacity && items<no_of_max_item)
        {
        profit1=1+knapsack(i+1,w+weight[i],items+1);
        }
    else
        profit1=0;
    profit2=knapsack(i+1,w,items);
    return max(profit1,profit2);
}
int main()
{
    int test_cases;
    cin>>test_cases;
    int i,j;
    for(i=1;i<=test_cases;i++)
    {
        int p,q;
        cin>>n>>p>>q;
        no_of_max_item=p;
        capacity=q;
        for(j=0;j<n;j++)
        {
            cin>>weight[j];
        }
        cout<<"Case "<<i<<": "<<knapsack(0,0,0)<<endl;
    }
}
