#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;
int push(int item)
{
    if(top==N-1)
    {
        printf("stack is full\n") ;
   }
   else
   {
       top=top+1;
       stack[top]=item;
       printf("display %d \n", item);

   }
}
void pop()
{
    if(top== -1)
    {
        printf("stack is empty");

    }
    else 
    {
        printf("stack operation");
        int item= stack[top];
        printf("%d", item);
      //print(item );
       top=top-1;
       printf("display %d \n", item);
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty.\n");
    }
    else
    {
        printf("stack:");
        for(int i=-1;i<=top;i++)
        {
            printf("[%d]",stack[i]);

        }
        printf("\n");
    }

}

void exit()
{
    printf("exiting program\n");
    exit(0);
}

int main()
{
    int choice,item;
    while(1)
    {
        printf("------Stack Operation------");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");

    
    printf("enter choice i-4");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("enter item to push");
        scanf("%d",&item);
        push(item );
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

        case 4:
        exit();
        break;

        default:
        printf("invalid choice\n choice must be from 1-4");
        break;

    }
    }
return 0;    

}