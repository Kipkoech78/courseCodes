#include<stdio.h>
#include<stdlib.h>

deleteMember( int ar[])
{
    int i,pos;
    int ar[n];
    printf("enter position of element to remove");
    scanf("position= %d",&pos);
    for(i=pos; i=n-1;i++)
    ar[i]=ar[i+1];
    n=n-1;
    printf("array elements after deletion is \n");
    for(i=0;i<n;i++){
        printf("[%d]",ar[i]);
        return 0;

    }
}
/*
void display(ar[])
{
    int ar[];


}
*/

int main()
{
    int n;
    int ar[n];
    printf("enter size of array");
    scanf("%d",&n);
    deleteMember( ar[n]);
   // display(ar);
    return 0;
}