#include<bits/stdc++.h>
using namespace std;
#define mx 27
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
    int i;
    char ch;
    cin>>ch;
    int n=ch-64;
    //cout<<n<<endl;
    for(i=1;i<=n;i++)
        make_set(i);
    string line;
    getchar();
    while(true)
    {
        getline(cin,line);
        if(line=="")
            break;
        int p=line[0]-64;
        int q=line[1]-64;
        make_union(p,q);
    }
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        //cout<<parent[i]<<" ";
        //endl;
        if(i==parent[i])
            cnt++;
    }
    //cout<<endl;
    cout<<cnt<<endl;;
    if(test_cases!=0)
        cout<<endl;
    memset(parent,0,sizeof parent);
    //for(i=1;i<=n;i++)
        //cout<<parent[i]<<" ";
   // cout<<endl;
    }
}

