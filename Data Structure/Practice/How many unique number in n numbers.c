#include<stdio.h>
int flag[1000];
int main()
{
    int i,n,count=0,a[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(flag[a[i]]==0)
        {
            flag[a[i]]=1;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
/*
#include <stdio.h>
int main()
{
	int t, n, i, v;;
	scanf("%d", &t);
    while(t--){
		int a[100001] = {0};
		int x = 0;
		scanf("%d", &n);
        for(i = 0; i < n; i += 1){
			scanf("%d", &v);
			a[v] += 1;
			if(a[v] == 1)
				x++;
		}
		printf("%d\n", x);
	}
	return 0;
}*/
