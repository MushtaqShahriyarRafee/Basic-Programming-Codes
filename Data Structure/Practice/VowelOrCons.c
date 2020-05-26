#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    printf("%c is vowel\n",ch);}
    else{
    printf("%c is consonant\n",ch);}
    return 0;
}

