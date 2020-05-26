#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, x=0, count=0;
    vector<int> v;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a+k);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<=5)
        {
            x++;
            if(x%3==0)
                count++;
        }
    }
    cout << count << endl;

}

