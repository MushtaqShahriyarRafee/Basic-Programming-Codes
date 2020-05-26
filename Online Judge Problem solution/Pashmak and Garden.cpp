#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(y1==y2)
    {
        int a = abs(x1-x2);
        cout << x1 << " " << a+y1 << " " << x2 << " " << a+y2;
    }
    else if(x1==x2)
    {
        int a = abs(y1-y2);
        cout << a+x1 << " " << y1 << " " <<a+x2 << " " << y2;
    }
    else if((x1!=x2||y1!=y2)&&(abs(x1-x2)==abs(y1-y2)))
    {
            cout << x2 << " " << y1 << " " << x1 << " " << y2;
    }
    else
        cout << "-1";


}
