#include<bits/stdc++.h>
using namespace std;
#define mx 100
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
int mst_krushkals(int node)
{
    sort(vec.begin(),vec.end(),compare());
    int i;
    for(i=1;i<=node;i++)
        parent[i]=i;
    int cnt=0,total_cost=0;
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
    int no_node,no_edges;
    cin>>no_node>>no_edges;
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
    cout<<mst_krushkals(no_node)<<endl;;
}
