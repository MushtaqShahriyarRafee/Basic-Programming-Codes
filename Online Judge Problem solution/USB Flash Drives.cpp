#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, m, count=0, sum=0;
    cin >> n >> m;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i=v.size()-1; i>=0; i--)
    {
        sum+=v[i];
        if(sum<m)
            count++;
        if(sum>=m)
        {
            count++;
            break;
        }
    }
    cout << count << endl;
}
