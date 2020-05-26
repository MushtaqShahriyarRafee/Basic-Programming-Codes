#include<iostream>
#include<stack>
using namespace std;
stack<int>S;
int main()
{
    int n,m;
    while(cin>>n)
    {
        if(n==1)
        {
            cin>>m;
            S.push(m);
        }
        else if(n==2)
        {
            if(S.empty())
            cout<<"UnderFlow"<<endl;
            else{
                cout<<S.top()<<endl;
                S.pop();
            }
        }
        else
            cout<<S.size()<<endl;
    }
    return 0;
}
