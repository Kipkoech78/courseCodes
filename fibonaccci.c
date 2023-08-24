#include<stdio.h>
#include<stdlib.h>
int fibonacci( int n)
{
    if(n==0)
    {
        return -1;  //error

    }
    else if(n==1)
    {
        return 0; // 1st fibonaccci number is 0


    }
    else 
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    printf("enter n the pos in fibonacci");
    scanf("%d",&n);
    int results= fibonacci(n);
    if("results= -1"){
        printf("invalid input");

    }
    else{
        printf("%d is %d",n, results);

    }
    return 0;
}