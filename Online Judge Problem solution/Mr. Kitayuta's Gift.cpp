#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<char, int>mp;

int main()
{
    string s, a, b, c;
    cin >> s;
    for(char i='a'; i<='z'; i++)
    {
        for(int j=0; j<=s.size(); j++)
        {
            a=i;
            b=s;
            b.insert(j,a);
            c=b;
            reverse(c.begin(), c.end());
            if(c==b)
            {
                cout << c << endl;
                return 0;
            }

        }
    }
    cout << "NA" << endl;
}

