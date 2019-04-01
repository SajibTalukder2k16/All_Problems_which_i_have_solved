#include<bits/stdc++.h>
using namespace std;
vector<int>vec_edges[100];
vector<int>vec_costs[100];
int visited[100];
map<string,int>mp;
int cnt=1;
priority_queue<pair<int,int>>p_queue;
pair<int,int>pr;
int sum=0;
void prims_mst(int source,int node)
{
    visited[source]=1;
    int len=vec_edges[source].size();
    int i;
    for(i=0;i<len;i++)
    {
        if(visited[vec_edges[source][i]]==0)
            p_queue.push(make_pair((-1)*vec_costs[source][i],vec_edges[source][i]));
    }
    while(!p_queue.empty())
    {
        if(cnt==node)
            return;
        pr=p_queue.top();
        if(visited[pr.second]==0)
        {
            //visited[pr.second]=1;
            sum=sum+(-1)*(pr.first);
            p_queue.pop();
            cnt++;
            prims_mst(pr.second,node);
        }
        else
            p_queue.pop();
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    int test_cases,cases;
    cin>>test_cases;
    for(cases=1;cases<=test_cases;cases++)
    {
    int i,j,n;
    cin>>n;
    string city1,city2;
    int p=0;
    int cost;
    while(n--)
    {
       cin>>city1>>city2>>cost;
       if(mp[city1]==0)
        mp[city1]=++p;
       if(mp[city2]==0)
        mp[city2]=++p;
       vec_edges[mp[city1]].push_back(mp[city2]);
       vec_edges[mp[city2]].push_back(mp[city1]);

       vec_costs[mp[city1]].push_back(cost);
       vec_costs[mp[city2]].push_back(cost);
    }
    /**for(i=1;i<=p;i++)
    {
        cout<<i<<" >\t";
        for(j=0;j<vec_edges[i].size();j++)
        {
            cout<<vec_edges[i][j]<<" ";
        }
        cout<<endl;
    }**/
    int node=p;
    prims_mst(1,node);
    if(cnt==node)
        cout<<"Case "<<cases<<": "<<sum<<endl;
    else
        cout<<"Case "<<cases<<": "<<"Impossible"<<endl;
    sum=0;
    cnt=1;
    memset(visited,0,sizeof visited);
    for(i=1;i<=node;i++)
        vec_edges[i].clear();
    for(i=1;i<=node;i++)
        vec_costs[i].clear();
    mp.clear();
    p_queue=priority_queue<pair<int,int>>();

    }
}

