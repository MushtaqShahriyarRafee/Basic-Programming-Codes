#include<bits/stdc++.h>
using namespace std;

int B_search(int n, int a[], int x)
{
    int low = 0, high = n, mid, ans;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(a[mid]<=x)
        {
            ans = mid;
            low = mid+1;
        }
        else
            high = mid-1;
    }
    return ans;
}
int main()
{
    int n, x, y, q, sum=0;
    cin >> n ;
    int a[n], arr[n];
    for(int i=0; i<n; i++)
        cin >> a[i] ;
    sort(a,a+n);
    arr[0] = a[0];
    for(int i=1; i<n; i++)
        arr[i] = arr[i-1]+a[i];
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin >> x;
        if(x<a[0])
            cout << 0 << " " << 0 << endl;
        else if(x>a[n-1])
            cout << n << " " << arr[n-1] << endl;
        else
        {
            y = B_search( n, a, x);
            cout << y+1 << " " << arr[y] << endl;
        }
    }
    return 0;
}

