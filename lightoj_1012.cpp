#include<bits/stdc++.h>
using namespace std;
#define pr pair<int,int>
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test_cases,cases;
    cin>>test_cases;
    for(cases=1;cases<=test_cases;cases++)
    {
    int W,H;
    cin>>W>>H;
    char graph[H][W];/// because problem says,There will be H more lines in the data set, each of which includes W characters
    int i,j,k,source_x,source_y;
    bool visited[H][W];
    memset(visited,0,sizeof visited);
    for(i=0;i<H;i++)
    {
        for(j=0;j<W;j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]=='@')
                source_x=i,source_y=j;
        }
    }
    int cnt=1;
    queue<pr>bfs_queue;
    //cout<<source_x<<" "<<source_y<<endl<<endl;;
    bfs_queue.push(make_pair(source_x,source_y));
    while(!bfs_queue.empty())
    {
        pr ft=bfs_queue.front();
        for(k=0;k<4;k++)
        {
            int nx=ft.first+fx[k];
            int ny=ft.second+fy[k];
            if(nx>=0 && nx<H && ny>=0 && ny<W && visited[nx][ny]==0 && graph[nx][ny]=='.')
            {
                cnt++;
                //cout<<nx<<" "<<ny<<endl;
                bfs_queue.push(make_pair(nx,ny));
                visited[nx][ny]=1;
            }
        }
        bfs_queue.pop();

    }
    cout<<"Case "<<cases<<": "<<cnt<<endl;
    }
}
