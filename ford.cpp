#include<iostream>
#include<queue>
#include<limits.h>
#include<vector>
using namespace std;

#define V 6

bool breadth_first_search(int mat[V][V], int source, int destination, int* path)
{
    queue <int> q;
    bool visited[V];
    for(int i=0; i<V; i++)
    {
        visited[i] = false;
    }

    q.push(source);
    visited[source] = true;
    path[source]=-1;

    while(!q.empty())
    {
        int curr_node = q.front();
        q.pop();
        for(int next_node = 0; next_node < V; next_node++)
        {
            if(visited[next_node] == false && mat[curr_node][next_node] > 0)
            {
                q.push(next_node);
                path[next_node] = curr_node;
                visited[next_node] = true;
            }
        }
    }
    return (visited[destination]==true);
}

int ford_fulkerson_compute(int mat[V][V],int source,int sink)
{
    int curr_node, parent_node;
    int max_flow = 0;
    int path[V];
    while(breadth_first_search(mat, source, sink, path))
    {
        int path_flow=INT_MAX;
        for(curr_node=sink; curr_node != source; curr_node = path[curr_node])
        {
            parent_node=path[curr_node];
            path_flow=min(path_flow, mat[parent_node][curr_node]);
        }
        for(curr_node=sink; curr_node != source; curr_node = path[curr_node])
        {
            parent_node = path[curr_node];
            mat[parent_node][curr_node] -= path_flow;
            mat[curr_node][parent_node] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}

int main()
{
    int mat[V][V] = {
                    {0, 16, 13, 0, 0, 0},
                    {0, 0, 10, 12, 0, 0},
                    {0, 4, 0, 0, 14, 0},
                    {0, 0, 9, 0, 0, 20},
                    {0, 0, 0, 7, 0, 4},
                    {0, 0, 0, 0, 0, 0}
                };
    cout<<"Max flow= "<<ford_fulkerson_compute(mat, 0, 5)<<endl;
    return 0;
}
