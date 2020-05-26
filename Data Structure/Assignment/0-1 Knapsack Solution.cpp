#include<bits/stdc++.h>
using namespace std;
int mat[10000][10000];
typedef struct
{
    int space, point;
} object;

int main()
{
    int w, n, i;
    int S;
    cin >> n >> S;
    object obj[n+1];
    for(i=1; i<=n; i++)
        cin >> obj[i].point;
    for(i=1; i<=n; i++)
        cin >>obj[i].space;
    for(i=0; i<=n; i++)
        mat[i][0] = 0;
    for(w=0; w<=S; w++)
        mat[0][w] = 0;
    for(i=1; i<=n; i++)
    {
        for(w=1; w<=S; w++)
        {
            if(obj[i].space > w)
                mat[i][w] = mat[i-1][w];
            else
                mat[i][w] = max(mat[i-1][w], mat[i-1][w-obj[i].space]+obj[i].point);
        }
    }
    cout << mat[n][S] << endl;
}
