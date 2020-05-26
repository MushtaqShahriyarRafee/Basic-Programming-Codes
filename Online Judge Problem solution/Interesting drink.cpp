#include<bits/stdc++.h>
using namespace std;
vector<int>v;
#define ll long long
map<char, int>mp;
//ll int a[100005], ar[100005];

int binarySearch(ll a[], ll n, ll x)
{
    ll high = n,low = 1, mid, ans;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(x >= a[mid])
        {
            low = mid+1;
            ans=mid;
        }
        else high = mid-1;
    }
    return ans;
}

int main()
{
    ll t, n, m,  b, c, d, x, y, maxi;
    cin >> n;
    ll a[n];
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    cin >> m;
    for(int i=1; i<=m; i++)
    {
        cin >> y;
        if(y<a[1])
            cout << 0 << endl;
        else if(y>=a[n])
            cout << n << endl;
        else
        {
            x = binarySearch(a,n,y);
            cout << x << endl;
        }
    }
}

