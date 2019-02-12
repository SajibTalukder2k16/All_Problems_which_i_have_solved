#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ///M(i,j)=M(i−1,j−1)=M(i−1,j+1)=M(i+1,j−1)=M(i+1,j+1)= 'X'.
    int n,i,j,count=0;
    cin>>n;
    char ara[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>ara[i][j];
    for(i=1;i<n-1;i++)
        for(j=1;j<n-1;j++)
    {
        if(ara[i][j]=='X' && ara[i-1][j-1]=='X' && ara[i-1][j+1]=='X' && ara[i+1][j-1]=='X' && ara[i+1][j+1]=='X')
            count++;
    }
    cout<<count<<endl;
}
