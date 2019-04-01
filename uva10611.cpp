#include<bits/stdc++.h>
using namespace std;
int bin_up_bnd(int ara[],int x,int n)
{
    int left=0;
    int index=-1;
    int right=n-1,mid;
    //cout<<"RRRR: "<<right<<endl;
    while(right>=left)
    {
        //cout<<"R: "<<right<<endl;
        mid=(left+right)/2;
        if(ara[mid]==x)
        {
            index=mid;
            //cout<<"I am from high: "<<index<<endl;
            left=mid+1;
        }
        else if(ara[mid]>x)
        {
            right=mid-1;
        }
        else if(ara[mid]<x)
            left=mid+1;
    }
    //if(index==-1)
        //return mid;
    return right;
}
int bin_low_bnd(int ara[],int x,int n)
{
    int left=0;
    int index=-1;
    int right=n-1,mid;
    //cout<<"URUR "<<right<<endl;
    while(right>=left)
    {
       // cout<<"L: "<<left<<endl;
        mid=(left+right)/2;
        if(ara[mid]==x)
        {
            index=mid;
            //cout<<"I am from low: "<<index<<endl;
            right=mid-1;
        }
        else if(ara[mid]>x)
        {
            right=mid-1;
        }
        else if(x>ara[mid])
            left=mid+1;
    }
    //if(index==-1)
        //return mid;
    return left;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int ara[n];
    //cout<<sizeof(ara)/sizeof(ara[0]);
    int i;
    for(i=0;i<n;i++)
        cin>>ara[i];
    int m;
    cin>>m;
    int x;
    for(i=0;i<m;i++)
    {
        cin>>x;
        int temp1=bin_low_bnd(ara,x,n);
        int temp2=bin_up_bnd(ara,x,n);
        int p,q;
        //cout<<"Pos: "<<temp1<<" "<<temp2<<endl;
        if(n==1)
            {
                if(ara[0]>x)
                    cout<<"X "<<ara[0]<<endl;
                else if(ara[0]<x)
                    cout<<ara[0]<<" X"<<endl;
                else
                    cout<<"X X"<<endl;
            }
        else if(n==2)
        {
            if(ara[0]<x && x<ara[1])
                cout<<ara[0]<<" "<<ara[1]<<endl;
            else if(ara[0]==x && ara[1]==x)
                cout<<"X X"<<endl;
            else if(ara[1]<x)
                cout<<ara[1]<<" X"<<endl;
            else if(ara[0]>x)
                cout<<"X "<<ara[0]<<endl;
        }
        else if(n>2)
        {
            if(temp1==0 && temp2==n-1)
                cout<<"X X"<<endl;
            else if(temp1==0 && temp2!=n-1)
                cout<<"X "<<ara[temp2+1]<<endl;
            else if(temp2==n-1 && temp1!=0)
                cout<<ara[temp1-1]<<" X"<<endl;
            else if(temp1==temp2 || x==ara[temp1])
                cout<<ara[temp1-1]<<" "<<ara[temp2+1]<<endl;
            else{
                if(temp1<temp2)
                    cout<<ara[temp1]<<" "<<ara[temp2]<<endl;
                else
                    cout<<ara[temp2]<<" "<<ara[temp1]<<endl;
            }
        }
        //if(temp1==0&& temp2==0)
           // cout<<
        //cout<<ara[temp1-1]<<" "<<ara[temp2+1]<<endl;
    }

}
