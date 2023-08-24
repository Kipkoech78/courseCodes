#include<stdio.h>
#include<stdlib.h>
int main()
{
    int matrix[4][2];
    int ar[8];
    for(int i=0;i<8;i++)
    {
        ar[i]=i+1;

    }
    int index=0;
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<2;col++){
          //  printf("[%d]  [%d]\n",row,col);
          matrix[row][col]= ar[index];
          index++;
        }
        
        
    }
    printf("matrix\n");
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<2;col++)
        {
            printf("[%2d] [%2d] \n",matrix[row][col]);
        }
    }    
    printf("array\n");
    for(int i=0;i<8;i++)
    {
        printf("%d\t",ar[i]);
    }
}