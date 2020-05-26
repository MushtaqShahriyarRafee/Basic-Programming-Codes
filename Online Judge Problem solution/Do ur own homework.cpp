#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, pd, i, reqd = 0, tcase = 1, j, rd[102], x = 0;
    char sub[102][22];
    char subj[22];
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {

            scanf("%s",sub[i]);
            scanf("%d",&rd[i]);
        }
        scanf("%d",&pd);
        scanf("%s",subj);
        for(i=0; i<n; i++)
        {
            if(!strcmp(sub[i],subj))
            {
                x = 1;
                reqd = rd[i];
                break;
            }
        }
        if(pd>=reqd && x!=0)
            printf("Case %d: Yesss\n",tcase++);
        else if(reqd > pd && reqd<=(pd+5) && x!=0)
            printf("Case %d: Late\n",tcase++);
        else if(x== 0)
            printf("Case %d: Do your own homework!\n",tcase++);
        else
            printf("Case %d: Do your own homework!\n",tcase++);
        reqd = 0;
        x = 0;
    }
}
