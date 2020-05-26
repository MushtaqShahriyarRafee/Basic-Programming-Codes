#include<stdio.h>
int main()
{
    char Ch;
    scanf("%c",&Ch);
    if(Ch>='A'&&Ch<='Z')
    printf("%c",Ch+32);
    else if(Ch>='a'&&Ch<='z')
    printf("%c",Ch-32);
    return 0;

}
