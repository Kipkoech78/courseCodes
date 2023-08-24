#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

};
int main()
{
    struct node *head,*newnode,*temp;
    head=NULL;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("enter value");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(newnode==0)
    {
        newnode=head;

    }
    else
    {
        head->next = newnode;
        temp=newnode;
    }
    printf("%d",temp->data);
    temp= temp ->data;


return 0;
}