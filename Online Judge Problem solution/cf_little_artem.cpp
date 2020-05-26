#include<bits/stdc++.h>
#include<vector>
int n = 100, m = 100;
using namespace std;

int main()
{
    int x = 0, y = 0, z, test;
    int arr[n][m];
    string str[n][m];
    cin >> test;
    while(test>0)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(i == 1 && j == 1)
                    cout << "W";
                else cout << "B";
            }
            cout << '\n';
        }
        test--;
    }
    return 0;
}
