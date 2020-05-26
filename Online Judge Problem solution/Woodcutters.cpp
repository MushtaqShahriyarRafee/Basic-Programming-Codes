#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
int x[10006], dp[1000006];
const int inf=0x3f3f3f3f;
int main()
{
    int n, c=0, ans=-inf;
    cin >> n;
    P a[n];
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i].first - a[i].second > ans)
        {
            ans = a[i].first;
            c++;
        }
        else if(i == n-1 || a[i].first+a[i].second < a[i+1].first)
        {
            ans = a[i].first + a[i].second;
            c++;
        }
        else
            ans = a[i].first;
    }
    cout << c << endl;
}
