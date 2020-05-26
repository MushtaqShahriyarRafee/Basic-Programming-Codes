#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, a1, b1, count = 1;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(a!=b)
            count = 0;
    }
    if(count==1)
        cout << "Poor Alex" << endl;
    else
        cout << "Happy Alex" << endl;
}


