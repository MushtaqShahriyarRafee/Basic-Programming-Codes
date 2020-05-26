#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x=1;
    cin >> t;
    while(t--)
    {
        long long int n;
        string s;
        cin >> n >> s;
        cout << "Case " << x++ << ": ";
        if(s == "Alice")
        {
            if(n%3 == 1)
                cout << "Bob" << endl;
            else
                cout << "Alice" << endl;
        }
        else if(s == "Bob")
        {
            if(n%3 == 0)
                cout << "Alice" << endl;
            else
                cout << "Bob" << endl;
        }
    }
}
