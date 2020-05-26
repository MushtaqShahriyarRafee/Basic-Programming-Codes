#include<bits/stdc++.h>
struct node
{
    int data;
    node  *next; //node type hoite hobe
};
node *start=NULL;
void listinsert(int data)
{
    node *item =(node *)malloc(sizeof(node)); //struct toiri hoilo,ek ongshe int,ek ongshe address
    item->data= data; //pointer er jonno "." bebohar kora jabe na..properties pawar jonno -> use kora lagbe
    item->next= start;//next er por ar kisu nai tai null..1st e null hisebe ashbe..pore start object ashbe
    start= item;//start bolte ebar element ke bujha jacche
}
void showlist()
{
    node *current =start;
    while(current != NULL)//null hoile link list shesh
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
void deletefromlist(int data)
{
    node *previous =NULL;
    node *current =start;
    while(current != NULL)//null hoile link list shesh
    {
        if(current->data==data) //data match korle
        {
            if(previous==NULL) //shurur tai delete korte chaile
                start=current->next;
            else previous->next=current->next; //previous null na hoile,,porer kono element
        }
        previous=current;
        current=current->next;
    }

}
int main()
{
    listinsert(4);
    listinsert(5);
    listinsert(3);
    listinsert(2);
    listinsert(1);
    deletefromlist(2);
    showlist();
    return 0;
}
