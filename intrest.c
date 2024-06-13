#include<stdio.h>
#include<math.h>
void main()
{
	float p,a,r,t,s,c;
	printf("Enter Principle ");
	scanf("%f",&p);
	printf("Enter Rate ");
	scanf("%f",&r);
	printf("Enter Time ");
	scanf("%f",&t);
	s=(p*r*t)/100;
	a=p*(pow(1+r/100,t));
	c=a-p;
	printf("Simple Intrest = %.4f",s);
	printf("\nCompound Intrest = %.4f",c);
}
