#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
int main()
{
    struct node *tmp;
    tmp= (struct node*)malloc(sizeof(struct node));
    tmp->data= 1;
    tmp->link = NULL;

    struct node *node2;
    node2=(struct node*)malloc(sizeof(struct node));
    node2->data=45;
    node2->link= NULL;
    
}