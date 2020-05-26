#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s.substr(i,5)=="Danil")c++;
        if(s.substr(i,4)=="Olya")c++;
        if(s.substr(i,5)=="Slava")c++;
        if(s.substr(i,3)=="Ann")c++;
        if(s.substr(i,6)=="Nikita")c++;
    }
    if(c==1)
        cout << "Yes" << endl;
    else cout << "NO" << endl;
}


