#include<stdio.h>
void main()
{
	double a,b,c,d,e,sum,per,max;
	printf("Enter Maximum Marks :- ");
	scanf("%lf",&max);
	printf("\nEnter Marks of Subject 1 :- ");
	scanf("%lf",&a);
	printf("\nEnter Marks of Subject 2 :- ");
	scanf("%lf",&b);
	printf("\nEnter Marks of Subject 3 :- ");
	scanf("%lf",&c);
	printf("\nEnter Marks of Subject 4 :- ");
	scanf("%lf",&d);
	printf("\nEnter Marks of Subject 5 :- ");
	scanf("%lf",&e);
	sum=a+b+c+d+e;
	per=(sum*100)/max;
	printf("\nSum of Marks = %.2lf",sum);
	printf("\nPercentage of Marks obtained = %.2lf",per);
	printf("%%");
}