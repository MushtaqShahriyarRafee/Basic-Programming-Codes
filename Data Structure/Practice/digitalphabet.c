#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("%c is a capital",ch);
    else if(ch>='a'&&ch<='z')
    printf("%c is a small",ch);
    else if(ch>='0'&&ch<='9')
    printf("%c is a digit",ch);
    else
    printf("%c is a symbol",ch);
    return 0;

}

