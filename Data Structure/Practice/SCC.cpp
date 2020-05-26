#include<stdio.h>
#define MAX_SZ 100
#define STK_SZ 1000
int visited[MAX_SZ], mat[MAX_SZ][MAX_SZ], mat2[MAX_SZ][MAX_SZ], n, e, start, STK[STK_SZ], TOP = -1, cnt;
void Push(int item)
{
    STK[++TOP] = item;
}
int Pop()
{
    return STK[TOP--];
}
bool isEmpty()
{
    if(TOP == -1)
        return true;
    return false;
}
void DFS(int cur)
{
    int i;
    //printf("%d ", cur);
    for(i=0; i<n; i++)
    {
        if(mat[cur][i] == 1 && visited[i] == 0)
        {
            visited[i] = 1;
            cnt++;
            DFS(i);
            //printf("*** Pushing %d to Stack\n", i);
            Push(i);
        }
    }
}
void DFS2(int cur)
{
    int i;
    printf("%d ", cur);
    for(i=0; i<n; i++)
    {
        if(mat2[cur][i] == 1 && visited[i] == 0)
        {
            visited[i] = 1;
            DFS2(i);
        }
    }
}
void SCC()
{
    int i, cur;
    for(i=0; i<n; i++)
        visited[i] = 0;
    printf("\nSCC: \n");
    while(!isEmpty())
    {
        cur = Pop();
        //printf("popped: %d\n", cur);
        if(visited[cur] == 0)
        {
            visited[cur] = 1;
            DFS2(cur);
            printf("\n");
        }
    }
}
int main()
{
    int i, j, a, b;
    scanf("%d %d", &n, &e);
    for(i=0; i<n; i++)
    {
        visited[i] = 0;
        for(j=0; j<n; j++)
            mat[i][j] = 0;
    }
    for(i=0; i<e; i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        mat2[b][a] = 1;
    }
    //scanf("%d", &start);
    //visited[start] = 1;
    //cnt = 1;
    //DFS(start);
    //Push(start);
    for(i=0; i<n; i++)
        if(visited[i] == 0)
        {
            visited[i] = 1;
            cnt++;
            DFS(i);
            //printf("*** Pushing %d to Stack\n", i);
            Push(i);
        }
    printf("\ncnt: %d\n", cnt);
    /*printf("In STK\n");
    for(i=0;i<TOP;i++)
        printf("%d ", STK[i]);*/
    SCC();
    return 0;
}
/*
0 1 2 3
4 5 6 7

8 14
0 1
1 2
2 3
3 2
3 7
7 7
2 6
6 7
6 5
5 6
1 5
1 4
4 5
4 0

*/
