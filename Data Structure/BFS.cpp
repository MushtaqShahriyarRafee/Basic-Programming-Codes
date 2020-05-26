#include<bits/stdc++.h>
using namespace std;
#define MAX_SZ 100
#define Q_SZ 1000
int mat[MAX_SZ][MAX_SZ], color[MAX_SZ];
queue<int>q;

void bfs(int v, int e, int s)
{
    int current, i;
    q.push(s);
    color[s] = 1;
    while(!q.empty())
    {
        current = q.front();
        q.pop();
        for(i=0;i<v;i++)
        {
            if(mat[current][i] == 1 && color[i] == 0)
            {
                q.push(i);
                color[i] = 1;
            }
        }
        printf("%d ", current);
        color[current] = 1;
    }
}
int main()
{
    int i, j, v, e, a, b, start;
   // printf("Total Vertices: ");
    cin >> v;
   // printf("Total Edges: ");
    cin >> e;
    for(i=0;i<v;i++)
        for(j=0;j<v;j++)
            mat[i][j] = 0;
    for(i=0;i<v;i++)
        color[i] = 0;
    for(i=0;i<e;i++)
    {
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
   // printf("Starting node: ");
    cin >> start;
    bfs(v, e, start);
    return 0;
}
