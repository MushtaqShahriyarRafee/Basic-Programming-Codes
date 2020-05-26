#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int>P;

int main()
{
    int n;
    int capacity;
    cin >> n >> capacity;
    P arr[n];
    vector<int>v;
    int c=0;
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr, arr+n+1);
    for(int i=1; i<=n; i++)
    {
        if(arr[i].first<=capacity)
        {
            c++;
            capacity-=arr[i].first;
            v.push_back(arr[i].second);
        }
    }
    cout << c << endl;
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
