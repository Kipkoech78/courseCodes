#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
    int i=0,n=4;
    int lin[MAX] = {1,2,3,4,5};
    int val=0;
   // n=MAX;
    printf("array before inserting first element\n");
    for(i=0;i<n;i++)
    {
        printf("%d index[%d]",lin[i],i);

    }
    for(i=n;i>=0;i--)
    {
        lin[i+1]=lin[i];
    }
    lin[0]= val;
    n++;
    printf("\n after insertion\n");
    for(i=0;i<MAX;i++)
    {
        printf(" ; index[%d] =: %d",i , lin[i]);
    }
}