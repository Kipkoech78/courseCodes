#include<stdio.h>
#include<stdlib.h>
# define max 5
int stack[max];
int top=-1;
int push(int n)
{
    
    if(top== max-1)
    {
        printf("stack overflow");

    }
    else{
        top=top+1;
        stack[top]=n;

    }
    stack[top+1];
    printf("%d\n",n);
}
int peek()
{
    return stack[top];
}
int pop()
{
    
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
       int n= stack[top];
       printf("item on top removed is %d\n",n);  
        //top=top-1; 
    }
    //printf("%d\n", n );
    top=top-1;

    
}

int main()
{
    push(1);
    push(334);
    push(123);
    peek();
    printf("after pop is\n");
    pop();
    pop();
    pop();
    pop();
    return 0;
}
