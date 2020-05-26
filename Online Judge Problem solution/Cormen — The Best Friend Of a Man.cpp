#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;
int flag[1000];
int main()
{
    int n, k, ans=0, z;
    cin >> n >> k;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    for(int i=1; i<n; i++)
    {
        if(b[i]+b[i-1]<k)
        {
            z = k-(b[i]+b[i-1]);
            ans+=z;
            b[i]+=z;
        }
    }
    cout << ans << endl;
    if(ans==0)
    {
        for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
        return 0;
    }
    //cout << a[0] << " ";
    for(int i=0; i<n; i++)
        cout << b[i] << " ";
    cout << endl;
}
