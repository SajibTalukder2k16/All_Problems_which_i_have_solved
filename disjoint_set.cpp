#include<bits/stdc++.h>
using namespace std;
#define mx 100
int parent[mx];
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
void make_set(int n)
{
    parent[n]=n;
}
void make_union(int a,int b)
{
    int u=find_parent(a);
    int v=find_parent(b);
    if(u==v)
        return;
    else
        parent[u]=parent[v];
}
int main()
{
    int i;
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
        make_set(i);
}
