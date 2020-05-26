#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
int x[10006], dp[1000006];
int main()
{
    int n, a[3];
    cin >> n >> a[0] >> a[1] >> a[2];
    memset(x, -1, sizeof(x));
    x[0] = 0;
    for(int i=0; i<3; i++)
    {
        int b = n - a[i];
        for(int j=0; j<=b; j++)
        {
            if(~x[j])
                x[j+a[i]] = max(x[j+a[i]], x[j]+1);
        }
    }
    cout << x[n] << endl;
}
