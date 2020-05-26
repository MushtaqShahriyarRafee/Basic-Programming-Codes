#include<bits/stdc++.h>
using namespace std;
int power(long long a)
{
    int p = 0;
    while(a != 1)
    {
        a /= 2;
        p++;
    }
    return p;
}
int main()
{
    vector < int > v;
    int n, k, c, d;
    long long x;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(power(x));
    }
    int max = 0, ans = 0;
    if(k == n)
        d = 1;
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(k > (n - i))
                break;
            c = 1;
            for(int j = i; c <= k; j++)
            {
                ans += v[j];
                c++;
            }

            if(ans > max)
            {
                max = ans;
                d = i + 1;
            }
            ans = 0;
            //cout << i << " " << max << endl;
        }
    }
    cout << d << endl;
    return 0;
}

