#include<bits/stdc++.h>
using namespace std;
#define mx 100
int tree[mx];
int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=idx&(-idx);
    }
    return sum;
}
void update(int index,int array_size,int value)
{
    while(index<=array_size)
    {
        tree[index]+=value;
        index+=index&(-index);
    }
}
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    int i;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    for(i=1;i<=n;i++)
    {
        int idx=i;
        idx-=idx&(-idx);
        idx++;
        int sum=0;
        for(;idx<=i;idx++)
            sum+=ara[idx];
        tree[i]=sum;
    }
    cout<<"Tree done"<<endl;
    for(i=1;i<=n;i++)
        cout<<tree[i]<<"\t";
    cout<<endl;
    while(true)
    {
        int q;
        cin>>q;
        cout<<query(q)<<endl;
    }
}
