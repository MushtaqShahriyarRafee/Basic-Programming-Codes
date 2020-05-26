#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int>P;

struct node
{
int l,r;
} a[200200], b[2002000];

int main()
{
    int n, m, q, w, e, r;
    cin >> n;
    q=e=1e9+10;
    r=w=0;

    for(int i=1; i<=n; i++) cin>>a[i].l>>a[i].r,q=min(q,a[i].r),r=max(r,a[i].l);

    cin>>m;
    for(int i=1; i<=m; i++) cin>>b[i].l>>b[i].r,w=max(w,b[i].l),e=min(e,b[i].r);

    int x=max(0,w-q);
    int y=max(0,r-e);
    cout<<max(x,y)<<endl;
}

