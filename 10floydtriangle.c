#include<stdio.h>
void main()
{
    int num,i,j,k=1;
    printf("Enter a number to define rows:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%d ",k);
            k++;
        }
         printf("\n");
    }
}



/output/
  Enter a number to define rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
