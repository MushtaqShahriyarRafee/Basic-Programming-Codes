#include<bits/stdc++.h>
using namespace std;

int main()

{
    string n1,n2;
    int trim1= 0,trim2= 0;
    scanf("%s%s",n1,n2);
    while(n1[trim1++] == '0')
        trim1--;
    while(n2[trim2++] == '0')
        trim2--;
    int len1= strlen(n1);
    int len2= strlen(n2);
    if(len1 == 0 && len2 == 0)
    {
        printf("=\n");
        return;
    }
    if(len1 > len2)
        printf(">\n");
    else if(len1 < len2)
        printf("<\n");
    else
    {
        for(int i= 0; i<len1; i++)
        {
            if(n1[trim1+i] > n2[trim2+i])
            {
                printf(">\n");
                break;
            }
            else if(n1[trim1+i] < n2[trim2+i])
            {
                printf("<\n");
                break;
            }
            if(i == len1-1)

                printf("=\n");
        }

    }

}
