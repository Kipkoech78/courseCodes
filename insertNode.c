#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;

}; *head= NULL;

insertNode( int value)
{
    struct node*  newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    // newnode->next =NULL;
    if( head==NULL){
       newnode->next= head;
       head->next = newnode;
        }
    else
    {
        newnode->next = head;
        head= newnode;
    }    
    printf("data=%d->%p\n",newnode->data, newnode->next);
    return 0;
}
int main()
{
    insertNode(10);
    insertNode(23);
    insertNode(7683);
    return 0;
}