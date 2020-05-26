#include<iostream>
#include<queue>
using namespace std;
queue<int>Q;
int main()
{
    int i,n,m;
    while(cin>>n)
    {
        switch(n)
        {
        case 1:
            cin>>m;
            Q.push(m);
            cout<<"Queue Size="<<Q.size()<<endl;
            break;
        case 2:
            Q.pop();
            cout<<"Queue Size="<<Q.size()<<endl;
            break;
        default:
            cout<<"Queue Size="<<Q.size()<<endl;

        }
    }
}
