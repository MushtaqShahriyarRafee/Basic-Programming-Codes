#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, sum =0, count=0;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> b;
        sum+=b;
        v.push_back(b);
    }
    //cout << sum << endl;
    sort(v.begin(), v.end());
    int x=0;
    for(int i=v.size()-1; i>=0; i--)
    {
        x+=v[i];
        if(x<=sum/2)
            count++;
        else if(x>=sum/2)
        {
            count++;
            break;
        }

    }
    cout << count << endl;

}


