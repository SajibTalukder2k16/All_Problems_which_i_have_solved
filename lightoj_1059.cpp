#include<bits/stdc++.h>
using namespace std;
#define mx 10001
#define llu long long int
int parent[mx];
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
llu mst_krushkals(int node,int cost)
{
    sort(vec.begin(),vec.end(),compare());
    int i;
    for(i=1;i<=node;i++)
        parent[i]=i;
    int cnt=0;
    llu total_cost=0;
    int len=vec.size();
    for(i=0;i<len;i++)
    {
        int u=vec[i].node1;
        int v=vec[i].node2;
        int parent_u=find_parent(u);
        int parent_v=find_parent(v);
        if(parent_u!=parent_v && vec[i].cost<cost)
        {
            total_cost+=vec[i].cost;

           // cout<<u<<" "<<v<<" "<<vec[i].cost<<" "<<parent_u<<" "<<parent_v<<endl;
            //cout<<total_cost<<" "<<vec[i].cost<<endl;
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases,cases;
    cin>>test_cases;
    for(cases=1;cases<=test_cases;cases++)
    {
    int no_node,no_edges,airport_cost;
    cin>>no_node>>no_edges>>airport_cost;
    int i,n1,n2,c;
    edge input;
    for(i=0;i<no_edges;i++)
    {
        cin>>n1>>n2>>c;
        input.node1=n1;
        input.node2=n2;
        input.cost=c;
        vec.push_back(input);
    }
    llu sum=mst_krushkals(no_node,airport_cost);
    int cnt=0;
    for(i=1;i<=no_node;i++)
    {
        if(parent[i]==i)
            cnt++;
    }
    sum+=cnt*airport_cost;
    cout<<"Case "<<cases<<": "<<sum<<" "<<cnt<<endl;
    vec.clear();
    memset(parent,0,sizeof parent);
    }
}
