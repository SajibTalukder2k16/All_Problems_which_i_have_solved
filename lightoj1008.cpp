#include<bits/stdc++.h>
using namespace std;
int ara[101][101];
long long int check=1;
void foo1(int x)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        ///cout<<check<<endl;
        ara[i][x]=check++;
    }
    for(i=x-1;i>=1;i--)
    {
        ///cout<<check<<endl;
        ara[x][i]=check++;
    }
}
void foo2(int y)
{
    int i,j;
    for(i=1;i<=y;i++)
    {
        ///cout<<check<<endl;
        ara[y][i]=check++;
    }
    for(i=y-1;i>=1;i--)
    {
        ///cout<<check<<endl;
        ara[i][y]=check++;
    }
}
int main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        if(i%2==1)
            foo2(i);
        else
            foo1(i);
    }
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
            cout<<ara[i][j]<<"\t";
        cout<<endl;
    }
}
