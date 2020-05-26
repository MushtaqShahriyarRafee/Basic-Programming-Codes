#include<stdio.h>
int main()
{
    char ch[10000];
    int i,len;
    gets(ch);
    len=strlen(ch);
    if(len % 2 != 0)
        printf("%c",ch[len/2]);
    else
    {
        for(i=len-1; i>=0; i--)
            printf("%c",ch[i]);
    }
    printf("\n");
    return 0;
}
