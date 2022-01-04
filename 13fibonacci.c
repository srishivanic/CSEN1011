/Develop a C program to display nth term of a Fibonacci Series/

/programm/
#include<stdio.h>
  int main()
{
  int number,i=0,next,first=0,second=1;
  printf("\n Enter the range of the number");
  scanf("%d",&number);
  while (i<number)
  {
    if(i<=1)
    {
      next=1;
    }
    else{
           Next= first+second;
           second=Next;
    }
    i++;
    
  }
  return 0;
 
}
