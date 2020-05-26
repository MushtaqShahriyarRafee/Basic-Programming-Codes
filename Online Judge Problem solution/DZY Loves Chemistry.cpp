#include<bits/stdc++.h>
using namespace std;
vector<long long>a[10000];
bool vis[10000];
void DFS(long long int s)
{
    vis[s] = 1;
    for(int i=0; i<a[s].size(); i++)
    {
        if(!vis[a[s][i]])
            DFS(a[s][i]);
    }
}
int main()
{
    long long int i, z = 0, n, m, u, v;
    cin >> n>> m;
    if(n==1)
    {
        cout << "1" << endl;
        return 0;
    }
    for(i=0; i<m; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    memset(vis, 0,sizeof(vis));
    for(i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            DFS(i);
            z++;
        }
    }
    long long int y = pow(2,n-z);
    cout << y << endl;

}
