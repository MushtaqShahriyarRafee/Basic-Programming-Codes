#include<bits/stdc++.h>

using namespace std;

const int max = 105;
vector<int>g[max];
bool vis[max];
stack<int>st;

void dfs(int u)
{
    vis[u]=true;
    for(int i=0;i<(int)g[u].size();i++)
    {
        int v=g[u][i];
        if(vis[v]==false)
        {
            dfs(v);
        }
    }
}
int main()
{
    return 0;
}
