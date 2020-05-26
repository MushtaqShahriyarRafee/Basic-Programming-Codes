#include<bits/stdc++.h>
using namespace std;

int main()
{
   string a;
   cin >> a;
   vector<int>v;
   for(int i=0; i<a.size(); i++)
   {
       if(isdigit(a[i]))
       {
           int x = a[i]-'0';
           v.push_back(x);
       }
   }
   sort(v.begin(), v.end());
   int n = v.size();
   for(int i=0; i<n-1; i++)
   {
       cout<< v[i] << "+";
   }
   cout << v[n-1] << endl;
}

