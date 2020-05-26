#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cin >> n;
     if(n==1)
     {
         cout << -1 << endl;
         return 0;
     }
     int x = n*(n+1);
     cout << n << " " << n+1 << " " << x << endl;
 }

