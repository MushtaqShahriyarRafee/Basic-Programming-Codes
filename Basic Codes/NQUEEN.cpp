#include<iostream>
#define sz 100
using namespace std;
bool findSolution(int mat[sz][sz], int col, int n);
bool isSafe(int mat[sz][sz], int n, int row, int col);
int main()
{
    int n, i, j, col;
    cin>>n;
    int mat[sz][sz];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            mat[i][j] = 0;
    //Step 1: Start in the leftmost column
    col = 0;
    if(findSolution(mat, col, n)) {
        //print solution
        cout<<"Solution Found: "<<endl;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"There is no solution"<<endl;
    }
    return 0;
}
bool findSolution(int mat[sz][sz], int col, int n)
{
    int i;
    //Step 2: If all queens are placed
    //          return true
    if(col >= n)
        return true;
    //Step 3: Try all rows in the current column. Do following for every tried row:
    for(i=0;i<n;i++) {
        //3a) If the queen can be placed safely in this row then mark this [row, column]
        //as part of the solution and recursively check if placing queen here leads to
        //a solution
        if(isSafe(mat, n, i, col)) {
            mat[i][col] = 1;
            //3b) If placing queen in [row, column] leads to a solution then return true
            if(findSolution(mat, col + 1, n))
                return true;
            //c) If placing queen doesn't lead to a solution then unmark this [row, column]
            //and go to step (a) to try other rows.
            mat[i][col] = 0;
        }
    }
    return false;
}
bool isSafe(int mat[sz][sz], int n, int row, int col)
{
    int i, j;
    //checking left columns of same row
    for(i=0;i<col;i++)
        if(mat[row][i] == 1)
            return false;
    //checking left-top diagonals
    for(i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
        if(mat[i][j] == 1)
            return false;
    //checking left-bottom diagonals
    for(i=row+1,j=col-1;i<n && j>=0;i++,j--)
        if(mat[i][j] == 1)
            return false;
    return true;
}
