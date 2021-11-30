/*program to calculate total,average,percentage of marks*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	int total,average,percent;
	printf("Enter marks of mathematics --\n");
	scanf("%d",&a);
	printf("Enter the marks of english--\n");
	scanf("%d",&b);
	printf("Enter the marks of science--\n");
	scanf("%d",&c);
	printf("Enter the marks of social studies--\n");
	scanf("%d",&d);
	printf("Enter the marks of cs--\n");
	scanf("%d",&e);
	total=a+b+c+d+e;
	avg=total/5;
	percent=(total*100/500);
	printf("Your total is--%d\n",total);
	printf("Your average is--%d\n",avg);
	printf("Your percent is--%d\n",percent);
	
}
