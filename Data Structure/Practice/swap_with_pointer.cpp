#include<bits/stdc++.h>
using namespace std;
void s(int *a,int *b, int *c)
{
    int t;
    t=*b;
    *b=*a;
    *a=*c;
    *c=t;
}

int main()
{
    int a, b, c;
    cin >> a>> b>> c;
    s(&a,&b,&c);
    cout << "a"<<" = "<< a << " "<<"b" << " = "<< b << "  "<< "c" << " = "<< c <<endl;
}
