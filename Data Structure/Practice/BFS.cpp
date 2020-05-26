
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];

void bfs(int s, int n)
{
    for(int i=0; i<n; i++)visited[i]=0;
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                q.push(v);
            }
        }
        cout << u << " ";
    }
}

int main()
{
    int n, a, b, e, s;
    cin >> n >> e;
    for(int i=0; i<e; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
    }
    cin >> s;
    bfs(s, n);
}
