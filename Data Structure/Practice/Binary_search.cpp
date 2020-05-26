#include<bits/stdc++.h>
using namespace std;
int B_search(int n, int a[], int x)
{
    int low = 1, high = n, mid ;
    while(low <= high)
    {
       //mid = (low + high)/2;
       mid = low +(high-low)/(a[high]-a[low])*(x-a[low]);      //interpulation search
       if(a[mid] == x)
            return mid ;
       else if(a[mid] < x)
            low = mid + 1 ;
       else
            high = mid -1;
    }
    return -1;
}
int main()
{
    int n, i, a[10005], x, y;
    cin >> n ;
    //cin >> x ;
    for(i=1; i<=n; i++)
        cin >> a[i] ;
    cin >> x ;
    n = B_search( n, a, x);
    if(n == -1)
        cout << "No!!"<<endl;
    else
        cout << "Yes, Found at " << n << " position "<<endl;
    return 0;
}
