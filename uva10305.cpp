#include<bits/stdc++.h>
using namespace std;
#define mx 100
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,n1,n2;
    while(true)
    {
    cin>>n>>m;
    bool matrix[n+1][n+1]={0};
    int indegree[n+1]={0};
    if(n==0 && m==0)
        return 0;
    int i;
    for(i=1;i<=m;i++)
    {
        cin>>n1>>n2;
        if(matrix[n1][n2]==0){
                matrix[n1][n2]=1;
                indegree[n2]++;
        }
    }
    //for(i=1;i<=n;i++)
       // cout<<indegree[i]<<"\t";
        //cout<<endl;
    int cnt=0;
    for(i=1;i<=n;)
    {
        //cout<<"value: "<<i<<endl;
        if(indegree[i]==0)
        {
            if(cnt==n-1)
            {
                cout<<i<<endl;
                break;
            }
            else
            {
                cnt++;
                //cout<<"ami "<<cnt<<endl;
                cout<<i<<" ";
                //cout<<endl;
                indegree[i]=-5;
                int p,q;
                for(p=1;p<=n;p++)
                {
                    if(matrix[i][p]==true)
                        {
                            --indegree[p];
                            //cout<<"Hey: "<<p<<" "<<indegree[p]<<" ";;
                        }
                }
                //cout<<endl;
                i=1;
            }
        }
        else
            i++;
        //for(int j=1;j<=n;j++)
       //cout<<indegree[j]<<"\t";
    //cout<<endl;
    }

    }
}
