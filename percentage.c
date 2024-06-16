#include<stdio.h>
void main()
{
	float a,b,c,d,e,sum,per,max;
	printf("Enter Maximum Marks :- ");
	scanf("%f",&max);
	printf("Enter Marks of Subject 1 :- ");
	scanf("%f",&a);
	printf("Enter Marks of Subject 2 :- ");
	scanf("%f",&b);
	printf("Enter Marks of Subject 3 :- ");
	scanf("%f",&c);
	printf("Enter Marks of Subject 4 :- ");
	scanf("%f",&d);
	printf("Enter Marks of Subject 5 :- ");
	scanf("%f",&e);
	sum=a+b+c+d+e;
	per=(sum*100)/max;
	printf("Sum of Marks = %.2f",sum);
	printf("\nPercentage of Marks obtained = %.2f",per);
	printf(" % %");
}
