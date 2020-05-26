#include<bits/stdc++.h>
using namespace std;
int gcd(int arr[], int n)
{
    int r = arr[0];
    for(int i = 1; i < n; i++)
        r = __gcd(arr[i], r);
    return r;
}
int main()
{

    int t, n;
    cin >> t;
    while(t--) {
        int arr[100005];
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (gcd(arr, n) == 1)
            cout << "yes\n";
        else
            cout << "no\n";

    }
    return 0;
}
