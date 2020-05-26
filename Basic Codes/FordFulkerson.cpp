#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
#define sz 100
#define INF 9999999
int mat[sz][sz];
bool bfs(int s, int t, int n, int p[]){
    bool visited[n];
    int v;
    queue<int>q;
    memset(visited, false, sizeof(visited));
    visited[s] = 0;
    p[s] = -1;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(v=0;v<n;v++)
        {
            if(visited[v]==false && mat[u][v] > 0)
            {
                q.push(v);
                p[v] = u;
                visited[v] = true;
            }
        }
    }
    if(visited[t] == true)
        return true;
    return false;
}
int FordFulkerson(int source, int target, int nodes)
{
    int max_flow = 0, i, j;
    int parent[nodes];
    while(bfs(source, target, nodes, parent))
    {
        int path_flow = INF;
        //calculate minimum possible flow
        for(i=target; i!=source; i=parent[i]){
            j = parent[i];
            path_flow = min(path_flow, mat[j][i]);
        }
        //eliminate and add reverse path
        for(i=target; i!=source; i=parent[i]){
            j = parent[i];
            mat[j][i] -= path_flow;
            mat[i][j] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}
int main(){
    int i, j, v, s, t, d;
    cin>>v;
    for(i=0;i<v;i++)
        for(j=0;j<v;j++)
            mat[i][j] = 0;
    for(i=0;i<v;i++){
        for(j=0;j<v;j++)
            cin>>mat[i][j];
    }
    cin>>s>>t;
    cout<<"Maximum Flow: "<<FordFulkerson(s, t, v)<<endl;
    return 0;
}
