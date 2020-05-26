#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[1000][1000];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[j][i];
            if(arr[j][i]=='.')
            {
                if((j+i)%2==0)
                    arr[j][i] = 'B';
                else arr[j][i] = 'W';
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout << arr[j][i];
        cout << endl;
    }

}
