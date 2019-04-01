#include<bits/stdc++.h>
using namespace std;
#define mx 51
int parent[mx];
int cnt;
class edge
{
public:
    int node1,node2,cost;
    friend class compare;
};
vector<edge>vec;
class compare
{
public:
    bool operator()(const edge &one,const edge &two)
    {
        return one.cost<two.cost;
    }
};

int find_parent(int n)
{
    if(parent[n]==n)
        return n;
    else
    {
        parent[n]=find_parent(parent[n]);
        return parent[n];
    }
}
int mst_krushkals(int node)
{
    sort(vec.begin(),vec.end(),compare());
    int i;
    for(i=1;i<=node;i++)
        parent[i]=i;
    cnt=0;
    int total_cost=0;
    int len=vec.size();
    for(i=0;i<len;i++)
    {
        int u=vec[i].node1;
        int v=vec[i].node2;
        int parent_u=find_parent(u);
        int parent_v=find_parent(v);
        if(parent_u!=parent_v)
        {
            total_cost+=vec[i].cost;
            parent[parent_v]=parent_u;
            cnt++;
            if(cnt==node-1)
                break;
        }
    }
    return total_cost;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test_cases,cases;
    cin>>test_cases;
    for(cases=1;cases<=test_cases;cases++)
    {

    int i,j,n,value,cost=0;;
    cin>>n;
    edge input;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>value;
           // cout<<value<<endl;
            if(value>0 && i!=j)
            {
                input.node1=i;
                input.node2=j;
                input.cost=value;
                vec.push_back(input);
            }
            cost+=value;
        }
    }
    int sum=mst_krushkals(n);
    if(cnt!=n-1)
        cout<<"Case "<<cases<<": "<<-1<<endl;
    else
        cout<<"Case "<<cases<<": "<<cost-sum<<endl;
    vec.clear();
    memset(parent,0,sizeof parent);
    }
}
