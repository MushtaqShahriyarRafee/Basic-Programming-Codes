#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int i=0, a, x[10000];
    while(cin >> a)
    {
        x[i++] = a;
        //cout << i;
        sort(x,x+i);
        if(i%2 == 0)
            cout << (x[i/2 - 1] + x[i/2])/2 << endl;
        else cout << x[i/2] << endl;
    }
    return 0;
}
