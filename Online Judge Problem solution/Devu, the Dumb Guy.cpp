#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x, a;
    long long sum=0;
    cin >> n >> x;
    long long v[100007];
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v,v+n);
    for(int i=0; i<n; i++)
    {
        if(x==1)
            sum += v[i];
        else if(x>1)
        {
            sum += v[i]*x;
            x--;
        }
    }
    cout << sum << endl;

}

