#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;

    }
    else 
    {
        return n*fact(n-1);
    }   
}
int fib(int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(n==1)
    {
        return 1;

    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
int main()
{
    int lin=5;
    fact(lin);
    printf("%d!= %d\n", lin, fact(lin));
    fib(lin);
   // printf("%d!= %d", lin, fib(lin));
   printf("fibonancci ");
   for(int i=0;i<lin; i++)
   {
    printf("%d \t",fib(i));
   }
    return 0;
}