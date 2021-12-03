/*Program to calculate Simple intrest and Coumpond intrest*/

#include <stdio.h>

int main()
{
	int p,t,r;
	printf("Enter your Principle:--/n");
	scanf("%d",&p);
	printf("Enter your rate of Interesrt:--/n");
	scanf("%d",&r);
	printf("Enter your time in years:--/n");
	scanf("%d",&t);
	
	printf("Your calculated simple interest is--%d/n",(p*t*r)/100);
	
	printf("Your calculated coumpound intrest is--%d/n",p*(1+r/100)*t-1);
	
}
