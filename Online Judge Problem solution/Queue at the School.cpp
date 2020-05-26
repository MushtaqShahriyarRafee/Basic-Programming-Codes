#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int a[n];
    string s;
    cin >> s;
    while(p--)
    {
        for(int i=0; i<n; i++)
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
    }
    cout << s << endl;

}
