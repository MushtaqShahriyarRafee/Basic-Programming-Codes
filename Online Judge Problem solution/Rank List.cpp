#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x = 0;
    pair <int, int > a[55];
    cin >> n >> k;
    for(int i=0; i<n; i++)
        scanf("%d%d", &a[i].first, &a[i].second), a[i].first*=-1;
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[k-1])
            x++;
    }
    cout << x << endl;
}
