#include<bits/stdc++.h>
using namespace std;
#define mx 30009
#define white 0
#define black 2
#define gray 1
#define null -1;
int color[mx];
vector<int>vec_node[mx];
int dfs_visit(int u)
{
    color[u]=gray;
    int len=vec_node[u].size();
    int i;
    for(i=0;i<len;i++)
    {
        if(color[vec_node[u][i]]==white)
        {
            dfs_visit(vec_node[u][i]);
        }
    }
    color[u]=black;
}
int main()
{
    int node,edge,t;
    cin>>node>>t;
    int i,n1,n2;
    for(i=1;i<=node;i++)
        color[i]=white;
    int x;
    for(i=1;i<node;i++)
    {
        cin>>x;
        vec_node[i].push_back(i+x);
    }
    dfs_visit(1);
    if(color[t]==white)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
