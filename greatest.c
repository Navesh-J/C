#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	printf("Enter third number ");
	scanf("%d",&c);
	if(a>b&&a>c)
	printf("The Greatest number is %d",a);
	if(b>a&&b>c)
	printf("The Greatest number is %d",b);
	if(c>b&&c>a)
	printf("The Greatest number is %d",c);
}
