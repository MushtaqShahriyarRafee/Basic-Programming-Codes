#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string a,b;
    getline(cin, a);
    set<string> s;
    for(int i=0; i<a.size(); i++)
    {
        b = tolower(a[i]);
        if(b!=" ")
            s.insert(b);

    }
    //cout << s.size() << endl;
    if(s.size()==26)
        cout << "pangram" << endl;
    else cout << "not pangram" << endl;

}

