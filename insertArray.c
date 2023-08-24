#include<stdio.h>
int main()
{
    int ar[] = {1,2,3,4,5};
    int n=5,j=n,item=8,k=3,i=0;
    printf("elements before any insertio is :\n");
    for(i=0;i<5;i++)
    {
        printf("ar[%d] = %d\n", i, ar[i]);
    }
    
    n=n+1;
    while(j >= k)
    {
        ar[j+1]= ar[j];
        j = j - 1;
    }
    ar[k]= item;
    printf("elements afrer insertion =\n");
    for(i=0;i<n;i++)
    {
        printf("ar[%d]= %d\n", i, ar[i]);
    }

    return 0;
    
}