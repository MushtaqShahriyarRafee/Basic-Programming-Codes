#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    char aa[1000],c;
    int a,b,ans=0;
    cin >> aa;
    for(int i=0; aa[i]!='\0'; i++)
    {
        c = aa[i];
        if(isdigit(c))
            s.push(c-'0');
        else
        {
            if(c=='+')
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                ans = a+b;
                s.push(ans);
            }
            if(c=='-')
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                ans = a-b;
                s.push(ans);
            }
            if(c=='*')
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                ans = a*b;
                s.push(ans);
            }
            if(c=='/')
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                ans = a/b;
                s.push(ans);
            }
            if(c=='^')
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                ans = pow(a,b);
                s.push(ans);
            }
        }
    }
    cout << s.top() << endl;
}
