#include<bits/stdc++.h>
using namespace std;
int a[1000010];

int main()
{
    int n,t, z=0, x=0, y=0, sum=0;
    cin >> n >> t;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(; ; )
    {
        if(x>=n) break;
        while(x<n && sum <t)
        {
            sum+=a[x++];
        }
        if(sum > t) sum-=a[--x];
        if(x>n) break;
        z = max(z,x-y);
        sum -=a[y++];
    }
    cout << z << endl;
}

