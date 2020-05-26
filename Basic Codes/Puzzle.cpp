#include<iostream>
using namespace std;
#define sz 100
int countInversion(int mat[], int N);
int getXRow(int mat[sz][sz], int N);
int main()
{
    int N, i, j, pos, inv_cnt;
    cin>>N;
    int mat[sz][sz];
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j] == 0)
                pos = N-i;
        }
    inv_cnt = countInversion((int*)mat, N);
    if(N & 1)
    {
        //N ODD
        if(!(inv_cnt & 1))
            cout<<"Solvable"<<endl;
        else
            cout<<"Not Solvable"<<endl;
    }
    else
    {
        //N EVEN
        pos = getXRow(mat, N);
        if(((inv_cnt & 1) && !(pos & 1)) || (!(inv_cnt & 1) && (pos & 1)))
            cout<<"Solvable"<<endl;
        else
            cout<<"Not Solvable"<<endl;
    }
    return 0;
}
int countInversion(int mat[], int N)
{
    int cnt = 0, i, j;
    for(i=0;i<N*N-1;i++)
    {
        for(j=i+1;j<N*N;j++)
        {
            if(mat[i] > mat[j])
                cnt++;
        }
    }
    return cnt;
}
int getXRow(int mat[sz][sz], int N)
{
    int i, j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(mat[i][j] == 0)
                return N-i;
        }
    }
}
