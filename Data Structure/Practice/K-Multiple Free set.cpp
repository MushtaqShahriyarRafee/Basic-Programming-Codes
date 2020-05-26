#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a[100005];
    map <int, int> m;
    cin >> n>> k;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]%k==0)
        {
            if(m.count(a[i]/k)==true)
                continue;
            else m.insert(make_pair(a[i], 0));
        }
        else m.insert(make_pair(a[i], 0));
    }
    cout << m.size() << endl;
    return 0;
}
