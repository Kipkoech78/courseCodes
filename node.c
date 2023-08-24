#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL;
    struct node *p = NULL;
    struct node *temp = NULL;
    int i;
    for(i=0;i<5;i++)
    {
        struct node *temp= (struct node*) malloc(sizeof (struct node));
        printf("enter the %d value: ",i+1 );
        scanf("%d",& temp -> data);
        temp -> next = NULL;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            p=head;
            while( p ->next!=NULL)
            {
                p = p ->next;
            }
            p ->next= temp;

        }
        p=head;
        while(p!=NULL)
        {
            printf("%d|%p->",p->data,p->next);
            p=p->next;
        }
    }
    return 0;
}