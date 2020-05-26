#include<bits/stdc++.h>
using namespace std;
stack<int>s;
#define MAX_SZ 100

int mat[MAX_SZ][MAX_SZ], vis[MAX_SZ], STK[MAX_SZ], top = -1;
void push(int item)
{
    STK[++top] = item;
}
int pop()
{
    return STK[top--];
}
bool isEmpty()
{
    if(top == -1)
        return true;
    return false;
}
void dfs(int v, int e, int s)
{
    int current, i;
    push(s);
    vis[s] = 1;
    while(!isEmpty())
    {
        current = pop();
        vis[current] = 1;
        for(i=0; i<v; i++)
        {
            if(mat[current][i] == 1 && vis[i] == 0)
            {
                push(i);
                vis[i] = 1;
            }
        }
        printf("%d ", current);
    }
}
int main()
{
    int i, j, v, e, a, b, start;
    // printf("Total Vertices:");
    cin >> v;
    //printf("Total Edges:");
    cin >> e;
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
            mat[i][j] = 0;
    }
    for(i=0; i<v; i++)
        vis[i] = 0;
    for(i=0; i<e; i++)
    {
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    printf("Starting node: ");
    cin >> start;
    dfs(v, e, start);
    return 0;
}
/*
6 9
0 1
0 3
0 4
1 2
1 4
2 4
2 5
3 4
4 5
0
*/
