#include<bits/stdc++.h>
using namespace std;
#define mx 100001
class point{
public:
    int value;
    int no;
};
int arr[mx];
point tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].value = arr[b];
        tree[node].no=1;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    if(tree[Left].value==tree[Right].value)
    {
        tree[node].value=tree[Left].value;
        tree[node].no=tree[Left].no+tree[Right].no;
    }
    else
    {
        if(tree[Left].no>=tree[Right].no)
        {
            tree[node].value=tree[Left].value;
            tree[node].no=tree[Left].no;
        }
        else
        {
            tree[node].value=tree[Right].value;
            tree[node].no=tree[Right].no;
        }
    }
}
point query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
    {
        point x;
        x.value=0;
        x.no=0;
    }
    if (b==e)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    point p1 = query(Left, b, mid, i, j);
    point p2 = query(Right, mid + 1, e, i, j);
   ///need to edit it
    if(p1.value==p2.value)
    {
        tree[node].value=p1.value;
        tree[node].no=p1.no+p2.no;
    }
    else
    {
        if(p1.no>=p2.no)
        {
            tree[node].value=p1.value;
            tree[node].no=p1.no;
        }
        else
        {
            tree[node].value=p2.value;
            tree[node].no=p2.no;
        }
    }
    return tree[node];
}
int main()
{

   int n,m,p,q;
   cin>>n>>m;
   int i;
   for(i=1;i<=n;i++)
     cin>>arr[i];
   init(1,1,n);
   for(i=1;i<n*3;i++)
    cout<<tree[i].value<<" "<<tree[i].no<<endl;
   while(m--)
   {
       int p,q;
       cin>>p>>q;
       point pp=query(1,1,n,p,q);
       cout<<pp.no<<" "<<pp.value<<endl;
   }
}

