#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
typedef pair<int, int>P;

int main()
{
    int n, m, k, a, b, c=0;
    int capacity;
    cin >> n >> m >> k;
    for(int i=1; i<=k; i++)
    {
        cin >> a>> b;
        arr[a][b]=1;
        if(arr[a-1][b]==1&&((arr[a][b-1]==1&&arr[a-1][b-1]==1)||(arr[a-1][b+1]==1&&arr[a][b+1]==1))&&c==0)
            c=i;
        else if(arr[a+1][b]==1&&((arr[a][b-1]==1&&arr[a+1][b-1]==1)||(arr[a+1][b+1]==1&&arr[a][b+1]==1))&&c==0)
            c=i;
    }
    cout << c << endl;


}

