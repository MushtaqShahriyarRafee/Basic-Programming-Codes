#include<iostream>
using namespace std;
typedef struct{
    int weight, price;
}object;
int main()
{
    int i, n, mat[100][100], capacity, w;
    object obj[100];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>obj[i].weight>>obj[i].price;
    cin>>capacity;
    //initialization
    for(i=0;i<=n;i++)
        mat[i][0] = 0;
    for(w=0;w<=capacity;w++)
        mat[0][w] = 0;

    //0-1 Knapsack
    for(i=1;i<=n;i++)
    {
        for(w=1;w<=capacity;w++)
        {
            if(obj[i].weight > w)
                mat[i][w] = mat[i-1][w];
            else
            {
                //mat[i][w] = max(mat[i-1][w], mat[i-1][w-wi]+pi)
                mat[i][w] = max(mat[i-1][w], mat[i-1][w-obj[i].weight] + obj[i].price);
            }
        }
    }
    cout<<"Max profit: "<<mat[n][capacity]<<endl;
    return 0;
}








