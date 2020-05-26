#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, count = 1;
    vector<int>v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    long long int sum = v[0];
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]>=sum)
        {
            sum+=v[i];
            count++;
        }
    }
    cout << count << endl;
}

