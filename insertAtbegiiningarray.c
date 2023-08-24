#include<stdio.h>
#define max 5
int main()
{
    int lin[max]= {2,3,4,5};
    int i=0,n=4;
    printf("before insertion");
    for(i=0;i<n;i++ )
    {
        printf("[%d],", lin[i]);
    }
    int k=1;
    //shifting arrays to the right
    for(i=4;i>=0;i--)
    {
        lin[i+1]= lin[i];
    }
    lin[0]=k;
    printf("array elements after insertion");
    for(i=0;i<max;i++)
    {
        printf("[%d]",lin[i]);
    }
    return 0;
}